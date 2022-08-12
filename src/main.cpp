#include "rusty_code/src/lib.rs.h"
#include <iostream>
#include <string>
#include "rust/cxx.h"

int main()
{
  std::cout << "A value given via generated cxxbridge for rusty_cxxbridge_bool: "
            << rusty_cxxbridge_bool(true) << "\n";
  std::cout << "A value given via generated cxxbridge for rusty_cxxbridge_integer: "
            << rusty_cxxbridge_integer(86) << "\n";
  const rust::String testString = "Max";
  std::cout << "A value given via generated cxxbridge for rusty_cxxbridge_string: "
            << rusty_cxxbridge_string(testString) << "\n";
  std::cout << "Testing a case of panic by running panicked_function: "
            << rusty_cxxbridge_panicked_function() << "\n";
  return 0;
}
