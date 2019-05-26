// include iostream for printing
#include <iostream>

// Define class Base
class Base {
  // Declare an empty public constructor
  public:
    Base() {};
    // Define virtual print() function
    virtual void print() {
      std::cout << "Base Print\n"; 
    }
    // Define non-virtual calc() function
    void calc() {
      std::cout << "Base Calc\n";
    }
};

// Define subclass Derived that publicly inherits from Base
class Derived : public Base {
  // Declare an empty public constructor
  public:
    Derived() {};
    // Define print() function
    void print() {
      std::cout << "Derived Print\n"; 
    }
    // Define calc() function
    void calc() {
      std::cout << "Derived Calc\n";
    }
};

// Test in main()
int main() {
  Base *base_ptr;
  Derived derived;
  base_ptr = &derived;

  //virtual function, binded at runtime (Runtime polymorphism)
  base_ptr->print();

  // Non-virtual function, binded at compile time
  base_ptr->calc();

  // Returns:
  // Derived Print
  // Base Calc
}