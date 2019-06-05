// Example program
#include <iostream>

int main() {
  double *ptr = new double(23);
  double *arr_ptr = new double[4];

  for (int i = 0; i < 3; i++) {
    *ptr = ++*ptr;
    std::cout << "Address: " << ptr << " Value: " << *ptr << std::endl;
    std::cout << "Address array: " << arr_ptr 
              << " Value array: " << arr_ptr[i]
              << std::endl;
  }

  for (int i = 0; i < 3; i++) {
    ptr = ++ptr;
    std::cout << "Address: " << ptr << " Value: " << *ptr << std::endl;
    std::cout << "Address array: " << arr_ptr << " Value array: " << arr_ptr[i]
              << std::endl;
  }
}

// OUTPUT: 
/*
Address: 0x1a809e0 Value: 24
Address array: 0x1a80a00 Value array: 0
Address: 0x1a809e0 Value: 25
Address array: 0x1a80a00 Value array: 0
Address: 0x1a809e0 Value: 26
Address array: 0x1a80a00 Value array: 0
*/