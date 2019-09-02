#include <iostream>

class Vehicle {
public:
  void get_info() {
    std::cout << "This is a vehicle!"
              << "\n";
  }

private:
  int mileage;
  int fuel_capacity;
};

class Car : public Vehicle {
public:
  bool is_cabriolet;
};

class Truck : public Vehicle {
public:
  bool has_sleeping_cabin;
};

int main() {
  Car c;
  c.is_cabriolet = true;
  std::cout << c.is_cabriolet << "\n";
  c.get_info();
};