// include iostream for printing
#include <iostream>
using std::cout;

// Define Point class
class Point {
  // Declare private attributes x and y
  private:
    int x;
    int y;

  // Define public constructor
  public:
    Point(int xx = 0, int yy = 0) {
      x = xx;
      y = yy;
    }
  // Define + operator overload
  Point operator + (Point const &obj) {
    Point pt;
    pt.x = Point::x + obj.x;
    pt.y = Point::y + obj.y;
    return pt;
  }
  // Define print() function to print (x,y) of Point
  void print() {
    std::cout << "X is: " << x << "\nY is: " << y << "\n";
  }
};

// Test in main()
int main() {
  Point p1 = Point(5, 5);
  Point p2 = Point(6, 6);
  Point p3;
  p3 = p1 + p2;
  p3.print();
}