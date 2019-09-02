#include <iostream>

/*
1.  Include standard library iostream
2.  Declare createArr function. Its input parameters are just integer value which
    represent size of array.
3.  Return type of this function is going to be pointer to integer values.
4.  Declare second function which will have input as integer value. This value is
    going to represent number of places with which we are going to expand our array
5.  Declare main function.
6.  First function is going to allocate block of memory for integers. Its size is
    going to be input parameter.
7.  First function needs to declare pointer which will show to the newly
    allocated memory block
8.  Return that pointer as return value of the function
9.  Second function is going to have three parameters,int pointer which will
    carry our array, and int variable, which will indicate how much we are going to
    expand our array and size variable, representing original size
10. After that we need to create new pointer which will show to the newly
    allocated space which expanded by number of places specified by our input
    parameter. After using for loop we can copy data from old array to new one
11. Before exiting our function we need to delete old array memory block using
    delete[] operator
12. Return value of our function is going to be newly created pointer, thus our
    return type of function is going to be pointer of type int
13. In main function we can ask for input of size of the array.
14. After successful input we can add  our data via for loop
15. Ask from user expansion info
16. Expand our array with second function
17. Print expanded array
*/

int* createArr(int n) {
  int* ptr = new int[n];
  return ptr;
}

int* resizeArr(int* ptr, int _size, int exValue) {
  int* newPtr = new int[_size + exValue];

  for (int i = 0; i < _size; i++) {
    newPtr[i] = ptr[i];
  }
  delete[] ptr;
  return newPtr;
}

int main() {
  int _size;
  std::cout << "Size of array: " << std::endl;
  std::cin >> _size;
  int* ptr = createArr(_size);

  for (int i = 0; i < _size; i++) {
    ptr[i] = i * i;
  }

  std::cout << "Created array: " << std::endl;

  for (int i = 0; i < _size; i++) {
    std::cout << ptr[i] << std::endl;
  }

  std::cout << "Expand value: ";
  int expandVal;
  std::cin >> expandVal;
  ptr = resizeArr(ptr, _size, expandVal);
  std::cout << "Expanded array: " << std::endl;

  for (int i = 0; i < (_size + expandVal); i++) {
    std::cout << ptr[i] << std::endl;
  }
  
  delete[] ptr;
  return 0;
}