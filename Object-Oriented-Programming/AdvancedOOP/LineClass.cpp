// include iostream for printing
#include <iostream>

/*
    Create a class Line.
    Implement a protected attribute length in class Line.
    Create a derived class Circle that inherits from class Line, with 
    2 function declarations getArea() and setRadius() using the attribute 
    length from class Line to represent the circle radius 
    (area of a circle = πr2\pi r^2πr2)
    Create a const pi to be used throughout the lab, outside of main() 
    and all classes (to hold the value of π=3.14159...\pi = 3.14159...π=3.14159...)
    Call in main() the functions for setRadius() and getArea().
*/

// Define pi
const float pi = 3.14159;

// Define Line Class
class Line {
  // Define protected attribute length
  protected:
    float length;
  public:
    void setLength(float Length) {
      length = Length;
    }
    float getLength() {
      return length;
    }
};

// Define Circle subclass
class Circle : public Line {
  // Define public setRadius() and getArea()
  public:
    void setRadius(float Radius) {
      setLength(Radius);
    }
    float getArea() {
      float r = getLength();
      return pi * r * r;
    }
};

// Test in main()
int main() {
  Circle circle;
  circle.setRadius(1);
  std::cout << "Circle area is: " << circle.getArea() << "\n";
}