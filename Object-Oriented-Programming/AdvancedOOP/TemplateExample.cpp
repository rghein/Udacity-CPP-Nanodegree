#include <iostream>

template<class T, class U = char>
class A {
  public:
    T x;
    U y;
    A() { std::cout << "Constructor Called" << "\n"; }
};

int main() {
  A<char> a;  // This will call A<char, char>    
}