#include <string>
#include <cstring>
#include <iostream>

class Car {
  // TODO: Declare private attributes
  private:
    int horsepower;
    int weight;
    const char* brand;
        
  // TODO: Declare getter and setter for brand
  public:
    void setHorsepower(int hPower);
    void setWeight(int carWeight);
    // The setter function for brand must accept a C++ string 
    // as a parameter and convert that string into a C-style string 
    // (a character array ending in null character) to set the value of brand.
    void setBrand(std::string carBrand);

    int getHorsepower();
    int getWeight();
    // The getter function for the brand must return a string, so in this 
    // function you first will need to convert brand to a std::string, 
    // and then return it
    std::string getBrand();   
};

// Define setters
void Car::setHorsepower(int hPower){
  horsepower = hPower;
}
void Car::setWeight(int carWeight) {
  weight = carWeight;
}
// The setter function for brand must accept a C++ string 
// as a parameter and convert that string into a C-style string 
// (a character array ending in null character) to set the value of brand.
void Car::setBrand(std::string carBrand){
  brand = carBrand.c_str();
}

// Define getters
int Car::getHorsepower() {
    return horsepower;
}
int Car::getWeight() {
  return weight;
}
// The getter function for the brand must return a string, so in this 
// function you first will need to convert brand to a std::string, 
// and then return it
std::string Car::getBrand() {
    std::string brandString = brand;
    return brandString;
}

// Test in main()
int main() {
  Car car;
  car.setBrand("Peugeot");
  std::cout << car.getBrand() << "\n";   
}