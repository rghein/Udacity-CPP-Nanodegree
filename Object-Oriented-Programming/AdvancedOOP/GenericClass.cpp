#include <iostream>
#include <vector>

// generic class definition type T
template <class T>
class Container {
  std::vector<T> arr;
  int s;

  public:
    Container() : s(0) {
      arr.clear();
    }
    int size(void) const {
      return Container::s;
    }
    void add(T el) {
      Container::s++;
      arr.push_back(el);
    }
    void print(void) {
      for (T i : arr) {
        std::cout << i << " ";
    }
    std::cout << "\n"
              << "Container::size: " << Container::s << "\n";
  }
};

int main() {
  Container<double> obj; // Partial deduction: element type is specified
  obj.add(2.00329132);
  obj.print();
  obj.add(8.83);
  obj.print();
  // TARGET OUTPUT:
  /*
        2.00329
        Size is:1
        2.00329 8.83
        Size is:2
    */
  return 0;
}