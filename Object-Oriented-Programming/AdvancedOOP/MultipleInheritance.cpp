#include <iostream>
#include <string>

class Animal {
  public:
      double weight;
      double size;
      // rest of class interface
};

class Pet {
  public:
      std::string name;
      std::string owner_name;
      // rest of class interface
};

// Dog is derived class with inherited properties
class Dog : public Animal, public Pet {
  public:
      bool has_long_fur;
      bool has_short_fur;
  // rest of class interface
};

int main() {
    Dog d;
    d.has_long_fur = true;
    d.weight = 10;
    d.size = 43;
    d.owner_name = "Ryan";
    std::cout << d.has_long_fur << "\n";
    std::cout << d.owner_name << "\n";
};