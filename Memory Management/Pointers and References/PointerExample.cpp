#include <iostream>

int main() {
  int val = 20;
  // declare pointer variable
  int *ptr = nullptr;
  // note that data type
  // of ptr and variable must be same
  ptr = &val;
  // assign the address of a variable to a pointer
  std::cout << "value at ptr (address):                " << ptr << std::endl;
  std::cout << "&val is:                               " << &val << std::endl;
  std::cout << "value at var (variable data):          " << val << std::endl;
  std::cout << "value at *ptr (dereferencing pointer): " << *ptr << std::endl;

  return 0;
}