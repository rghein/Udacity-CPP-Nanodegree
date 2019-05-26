#include <iostream>
#include <cmath>

// Create a class: Pyramid.
// Create 3 attributes: base_length, base_width, height (this is a square pyramid).
// Create a constructor to initialize all the attributes.
// Create getters and setters for all attributes.
// Create a member function to calculate the volume of the pyramid.
// Optional: create a member function to calculate the surface area of the pyramid.
// Optional: create a member function to check if the attribute values are less than or equal to zero and return an error if they are.

// TODO: Define class Pyramid
class Pyramid {  
  // Private class members
  private:
    float base_length;
    float base_width;
    float height;
  // Public class members
  public:
    // constructor for "Pyramid"
    Pyramid(float baseLength, float baseWidth, float pyrHeight) {
      base_length = baseLength;
      base_width = baseWidth;
      height = pyrHeight;
    }
        
    // get base length
    float getBaseLength() {
      return base_length;
    }    
    // get base width
    float getBaseWidth() {
      return base_width;
    }     
    // get height
    float getHeight() {
      return height;
    }    

    // set base length
    void setBaseLength(float baseLength) {
      base_length = baseLength;
    }    
    // set base width
    void setBaseWidth(float baseWidth) {
      base_width = baseWidth;
    }     
    // set height
    void setHeight(float pyrHeight) {
      height = pyrHeight;
    }  

    // public method that finds volume of pyramid
    float findVolume() {
      return ((base_length * base_width) * height) / 3.0;
    }
};

// TODO: Test in main()
int main() {
  Pyramid pyramid = Pyramid(3.0, 3.0, 2.0);
  std::cout << "Pyramid Volume is: " << pyramid.findVolume() << "\n";
}