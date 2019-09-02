// include iostream for printing
#include <iostream>

/*
    Create a class Animal.
    Create 3 attributes as "protected": color, name, age.
    Create a derived class Snake that will inherit the base class Animal.
    Create attribute length for the Snake class.
    Create a derived class Cat with attribute height that will inherit the base class Animal.
    Create getters and setters for all attributes in all classes.
    In the main() function instantiate classes Snake and Cat and initialize their specific 
    attributes and their common attributes that are in the base class.
*/

// Define base class Animal
class Animal {
  // Define protected base class attributes
  protected:
    std::string color;
    std::string name;
    int age;  
  // Define public setters and getters
  public:
    void setColor(std::string Color) {
      color = Color;
    }
    void setName(std::string Name) {
      name = Name;
    }
    void setAge(int Age) {
      age = Age;
    }
    std::string getColor() {
      return color;
    }
    std::string getName() {
      return name;
    }
    int getAge() {
      return age;
    }
};

// Define subclass Snake
class Snake : public Animal {
  // Define private attribute length
  private:
    float length;
  // Define public getter and setter
  public:
    void setLength(float Length) {
      length = Length;
    }
    float getLength() {
      return length;
    }
};    

// Define subclass Cat
class Cat : public Animal {
  // Define private attribute height
  private:
    float height;  
  // Define public getter and setter
  public:
    void setHeight(float Height) {
      height = Height;
    }
    float getHeight() {
      return height;
    }
};

// In the main() function instantiate classes Snake and Cat and initialize 
// their specific attributes and their common attributes that are in the base class.
int main() {
    Cat cat;
    Snake snake;

    cat.setAge(5);
    cat.setName("Bob");

    std::cout << "Cat's age and name: " << cat.getAge() << " " << cat.getName() << "\n";
}