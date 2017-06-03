#include <iostream>
#include <string>

int main() {
  const std::string hello = "Hello";
  const std::string message = ", world" + "!" + hello ;
  /*
  above block will not work, as the operator + does not support two string literals
  as operands
  */
  const std::string hello = "Hello";
  const std::string message = hello + ", world" + "!" ;
  /*
  above block will work as operator + is left associative, so the first + will have
  first operand as a string object and second operand as a string literal. Similarly, 
  second + has one string and one string literal as operands
  
  two string literals separated only by whitespace characters are 
  automatically concatenated 
  
  The ostream overloaded operator << and istream operator >> also have similar nature
  */
  return 0;
}