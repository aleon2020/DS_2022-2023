#include <stdexcept> // contains runtime_error

class DivisionException : public std::runtime_error {
public:
  DivisionException()
    : std::runtime_error ("trying to divide by zero!") {}
};
