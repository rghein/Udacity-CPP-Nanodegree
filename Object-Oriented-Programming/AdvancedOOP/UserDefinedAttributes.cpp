#include <iostream>
#include <string>
class A {
public:
  A(int a, double b, char c) : attr1(a), attr2(b), attr3(c) {
    std::cout << "A constructor" << "\n";
  }

  void print() const {
    std::cout << "A: " << attr1 << " " << attr2 << " " << attr3 << "\n";
  }

private:
  int attr1;
  double attr2;
  char attr3;
};

class B {
public:
  B(int num, int a, double b, char c) : number(num), attr(a, b, c) {
    std::cout << "B constructor"
              << "\n";
  }

  void print() const {
    std::cout << "B: " << number << " ";
    attr.print();
  }

private:
  int number;
  A attr;
};

int main() {
  B obj(23, 2, 2.3, 'X');
  obj.print();
}