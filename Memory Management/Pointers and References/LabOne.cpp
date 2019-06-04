#include <iostream>

/*
-Create new cpp file 
-Include standard iostream header 
-Using pointer syntax declared integer type pointer 
-Allocate memory of integer size via operator new 
-Set this part of memory to specific integer 
-Print memory address 
-Print memory address value 
-Free taken memory from the heap 
-Exit script
*/

int main() {
  int *ptr = nullptr;
  ptr = new int;
  *ptr = 25;
  std::cout << "Address of a pointer: " << ptr << std::endl;
  std::cout << "Value of a pointer:   " << *ptr << std::endl;
  delete ptr;
  return 0;
  /*
  OUTPUT:
  Address of a pointer: 0x1ca8c20
  Value of a pointer: 25
  */
}