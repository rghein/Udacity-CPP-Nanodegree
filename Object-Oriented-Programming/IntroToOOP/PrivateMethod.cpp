// include iostream for printing
#include <iostream>

/*
    Create a class called Abstraction
    Create two private attributes and one private function:
        number
        character
        ProcessAttributes()
    Create a setter function that will set both attributes.
    Create a getter that will run the ProcessAttributes() method 
    and just print the resulting values, not actually return them.
    Write the ProcessAttributes() function so that it multiplies 
    the number by 6 and adds 1 to the character.
    Set values of attributes in main()
    Call the getter function in main() to print the values out.
*/

// Define class Abstract
class Abstract {
  // Define private attributes
  private:
    int number;
    char character;
    // Define private method - Used to perform inner logic
    void ProcessAttributes() {
      number *= 6;
      character += 1;
    }
        
  // Define public getter and setter (getter calls private method)
  public:
    void setNumber(int num) {
      number = num;
    }
    void setChar(char Char) {
      character = Char;
    }
    void getter() {
      ProcessAttributes();
      std::cout << "Number Is: " << number << "\n";
      std::cout << "Character Is: " << character << "\n";
    }  
};

// Test in main()
int main() {
  Abstract abs;
  abs.setNumber(5);
  abs.setChar('x');
  abs.getter();
}