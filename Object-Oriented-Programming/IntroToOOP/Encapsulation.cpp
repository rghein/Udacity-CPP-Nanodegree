// Encapsulation
#include <iostream>  

class Encapsulation {
  private:
    int x;  // data encapsulated (hidden) within the class
    
  public:
    void Set(int a)  // interface to set the value of variable x
    {
      x = a;
    }

    int Get() // interface to get the value of variable x
    {
      return x;
    }
};

int main()
{
  Encapsulation obj;
  obj.Set(5);
  std::cout << obj.Get() << "\n";
}