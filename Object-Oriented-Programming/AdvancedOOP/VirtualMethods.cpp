// C++ program for function overriding
#include<iostream>
using std::cout;

class Base_Class {
    public:
        virtual void PrintVirtual () 
        {
          std::cout << "This is a message from the base class!!" << "\n";
        }

        void Print () 
        {
          std::cout << "This displays the base class." << "\n";
        }
};

class Derived_Class : public Base_Class {
  public:
      //print () is already virtual function in derived class, we could also declared  as virtual
      //void print () explicitly
      void PrintVirtual ()  
      {
        std::cout << "This is a message from the derived class!!" << "\n";
      }

      void Print () 
      {
        std::cout << "This displays the derived class." << "\n";
      }
};


int main()  
{
    Base_Class *pointer;
    Derived_Class der;
    pointer = &der;
    //virtual function, binded at runtime (Runtime polymorphism)
    pointer->PrintVirtual();  // OUTPUT: print derived class

    // Non-virtual function, binded at compile time
    pointer->Print(); // OUTPUT: print base class

}