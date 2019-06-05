/*
1. Declare basic include->iostream 
2. Declare main function 
3. Use pointer syntax to declare integer array pointer 
4. Use new operator to allocate memory block for integer array
5. Assign that operation to declared pointer 
6. Create for loop and use it to input new values from cin stream 
7. Print every memory address and value in array 
8. Release occupied space before exiting
*/

#include <iostream>

int main() {
  int *ptr;
  ptr = new int[5];

  for (int i = 0; i < 5; i++) {
    int inputVar;
    std::cin >> inputVar;
    ptr[i] = inputVar;
  }

  for (int i = 0; i < 5; i++) {
    std::cout << "Number " << ptr[i] 
              << " is stored on " << (ptr + i)
              << " address." << std::endl;
  }

  delete[] ptr;
  return 0;
}