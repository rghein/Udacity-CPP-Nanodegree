// This example demonstrates the privacy levels
// between parent and child classes
#include<iostream>

class ParentClass{

public:
    int var1;
protected:
    int var2;
private:
    int var3;

};

class ChildClass_1 : public ParentClass{

   // var1 is public for this class
   // var2 is protected for this class
   // var3 cannot be accessed from ChildClass_1
};

class ChildClass_2 : protected ParentClass{

   // var1 is protected for this class
   // var2 is protected for this class
   // var3 cannot be accessed from ChildClass_2
};

class ChildClass_3 : private ParentClass{

   // var1 is private for this class
   // var2 is private for this class
   // var3 cannot be accessed from ChildClass_3
};

int main() {
    ChildClass_1 c1;
    ChildClass_2 c2;
    ChildClass_3 c3;
    c1.var1 = 4;
    std::cout << c1.var1 << "\n";
    //Try running the statements below...
    //Which one do you expect to work?
    //c2.var1 = 5;
    //std::cout << c2.var1 << "\n";
    //c3.var1 = 6;
    //std::cout << c3.var1 << "\n";
}
