// Include iostream for printing
#include <iostream>

/*
    Create a class called Multiply.
    Add two private variables a and b.
    Create getters and setters for all attributes.
    Create a member function to return the product of two numbers.
    Create a constructor to initialize the two variables.
    Write a main() function to initialize an object of type Multiply, set the member variables and run the member function to print out the result of multiplication.
*/

// Define class Multiply
class Multiply {
  // Define private attributes
  private:
    int a;
    int b;
  // Define public constructor, getters and setters
  public:
    // Constructor
    Multiply(int A, int B) {
      a = A;
      b = B;
    }
    // Setters
    void setA(int A) {
      a = A;
    }
    void setB(int B) {
      b = B;
    }
    // Getters
    int getA() {
      return a;
    }
    int getB() {
      return b;
    }
  // Define a function to multiply private attributes
  int product() {
    return a * b;
  }
};

// Test in main()
int main() {
  Multiply mult = Multiply(55, 65);
  std::cout << "Product is: " << mult.product() << "\n";
}