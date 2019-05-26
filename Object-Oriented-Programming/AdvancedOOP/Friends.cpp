// include iostream for printing
#include <iostream>

/*
    1.  Declare a class Rectangle.
    2.  Create a class Square.
    3.  Add class Rectangle as a friend to the class Square.
    4.  Add a private attribute squ_side to class Square.
    5.  Create a public constructor in class Square that will initialize 
        the squ_side attribute with a value.
    6.  Implement class Rectangle
    7.  Add private members rec_width and rec_height to class Rectangle
    8.  Add two public functions to class Rectangle: Rec_Area() and Convert_SquToRec().
    9.  Define Convert_SquToRec() function to take an object of type Square as a 
        parameter and use it to get the private attribute side directly and 
        initialize rec_width and rec_height.
    10. Implement Rec_Area() function to calculate the area of the rectangle.
*/

// Declare class Rectangle
class Rectangle;

// Define class Square as friend of Rectangle
class Square {
  friend class Rectangle;
  // Add private attribute squ_side to Square
  private:
    float squ_side;
  // Add public constructor to Square, initialize squ_side
  public:
    Square(float side) {
      squ_side = side;
    }
};

// Implement Rectangle
class Rectangle {
  friend class Square;
  // Add private attributes width, height
  private:
    float rec_width;
    float rec_height;
    
  // Add public functions to Rectangle: Rec_Area() and convert_SquToRec()
  public:
    float Rec_Area();
    void convert_SquToRec(Square square);
};

// Define convert_SquToRec() to take Square and initialize Rectangle
void Rectangle::convert_SquToRec(Square square) {
  rec_width = square.squ_side;
  rec_height = square.squ_side;
}

// Define Rec_Area() to compute area of Rectangle
float Rectangle::Rec_Area() {
  float area = Rectangle::rec_width * Rectangle::rec_height;
    return area;
}

// Test in main()
int main() {
    Rectangle rectangle;
    Square square(4.0);
    rectangle.convert_SquToRec(square);
    std::cout << rectangle.Rec_Area() << "\n";  
}
