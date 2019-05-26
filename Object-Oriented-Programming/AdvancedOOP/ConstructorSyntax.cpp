#include <iostream>
#include <string>

class InitList {
public:
  // Initialization list is defined as part of constructor syntax
  InitList(int &_ref, char _c) : ref(_ref), c(_c) {}
  
  void print() {
    std::cout << ref << " " << c << "\n";
  }

private:
  int &ref;     // reference
  const char c; // const
};

int main() {
  int var = 10;
  InitList obj(var, 'A');
  obj.print();
  // Referenced variable:
  var += 10;
  obj.print(); // obj.ref == 20
}
