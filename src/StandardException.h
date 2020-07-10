#include <exception>
#include <iostream>

class ConfigError : public std::exception {
  int _error_number = 0;
  std::string _error_message = "Configuration Error";

public:
  explicit ConfigError(int error_number, std::string error_message)
      : _error_number(error_number) {
    generate_error_message(error_message);
  }

  void generate_error_message(std::string error_message) {
    _error_message = "Error Message: " + error_message +
                     "\nError number: " + std::to_string(_error_number);
  }
  
  virtual const char *what() const noexcept { // Return exception message
    return _error_message.c_str();
  }
};