#include <exception>
#include <iostream>

class ConfigError : public std::runtime_error {
  int _error_number = 0;
  std::string _error_message = "Configuration Error";

public:
  ConfigError(int error_number, std::string error_message)
      : std::runtime_error(error_message) {}

  int get_error_number() { return _error_number; }
};