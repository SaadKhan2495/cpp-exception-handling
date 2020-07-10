#include "RuntimeException.h"
#include <fstream>

bool file_exist(const std::string &name) {
  std::ifstream file(name.c_str());
  return file.good();
}

int main() {
  try {
    std::string file_name = "ConfigFile.txt";
    if (!file_exist(file_name)) {
      throw ConfigError(100, "Configuration file not found");
    }
    std::cout << "No Exception thrown." << std::endl;
  } catch (std::exception &exception) {
    std::cout << "Catching Standard Exception Class" << std::endl;
    std::cout << exception.what() << std::endl;
  } catch (std::runtime_error &exception) {
    std::cout << "Catching Runtime Exception Class" << std::endl;
    std::cout << exception.what() << std::endl;
  } catch (ConfigError &exception) {
    std::cout << "Catching Custom Exception Class" << std::endl;
    std::cout << exception.what() << std::endl;
    std::cout << "Error Number: " << exception.get_error_number() << std::endl;
  }
  return 0;
}