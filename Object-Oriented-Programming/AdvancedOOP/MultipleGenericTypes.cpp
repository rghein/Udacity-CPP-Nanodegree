
#include <iostream>
#include <vector>

// Helper generic function with a generic vector<T> parameter
template <typename T>
void print(std::vector<T> v) {
  for (T i : v) {
    std::cout << i << " ";
  }
  std::cout << "\n";
}

// Multiple use of type parameters for unique types.
// T1 supports basic operation, but T2 can be used as indexed container
// and object which contains method size()
template <typename T1, typename T2>
void scale(T1 num, T2 &container) {
  for (auto &i : container) {
    i *= num;
  }
}

//main function
int main() {
  std::vector<int> container = {2, 3, 17, 23, 14, 18, 21};
  print(container);
  scale(3, container);
  print(container);
  scale('Z', container); // 'Z' will convert to 90 when used as an integer
  print(container);
}
