// Include iostream for printing
#include <iostream>

// Create a class Abstraction.
// The class needs two private attributes var1 and var2.
// Create one single function to set both values.
// Create one function to print both v

// Define Abstraction class
class Abstraction {
  // Define private attributes
  private:
    int var1;
    int var2;
  // Define public setter and printing functions
  public:
    void setBoth(int one, int two) {
      var1 = one;
      var2 = two;
    }  
    void printBoth() {
      std::cout << "Variable One: " << var1 << "\n";
      std::cout << "Variable Two: " << var2 << "\n";
    }
};

// Test in main()
int main() {
  Abstraction abstraction;
  abstraction.setBoth(5, 6);
  abstraction.printBoth();
}