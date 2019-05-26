#include <iostream>

// Define template for average() function
template <typename Type>
Type Average(Type a, Type b) {
  return (a + b) / 2.0;
}

// Test in main() with different data types
int main() {
  int a = 5;
  int b = 7;
  std::cout << "Average of a and b is: " << Average(a, b) << "\n";

  float c = 3.14;
  float d = 8.67;
  std::cout << "Average of c and d is: " << Average(c, d) << "\n";
}