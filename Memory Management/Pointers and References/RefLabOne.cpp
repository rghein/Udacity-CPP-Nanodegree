#include <iostream>

/*
1. Create function swap.
2. Use template arguments, create generic type T which will be type of both input parameters
3. Declare input parameters by reference
4. Create function logic to swap two variable data
5. Logic is going to swap variables without usage of the helper (temp) variable
6. Return type of function is void ( doesn't return value)
7. Print out value of variables before and after function execution
8. Exit main function
*/

template <typename Type>
void swap(Type &var1, Type &var2) {
  var1 += var2;
  var2 = var1 - var2;
  var1 -= var2;
}

int main() {
  float var1 = 23.2;
  float var2 = 14.83;

  std::cout << "Values before swap: " << var1 << " " << var2 << std::endl;
  swap(var1, var2);
  std::cout << "Values after swap: " << var1 << " " << var2 << std::endl;

  return 0;
}