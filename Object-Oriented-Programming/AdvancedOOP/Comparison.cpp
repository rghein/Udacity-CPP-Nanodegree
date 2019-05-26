#include <iostream>

// Here we will create the template
template <typename Type>
Type ReturnMax(Type a, Type b) {
   if(a > b) 
       return a;
   else 
       return b;
}

int main() {
    int num1 = 50;
    int num2 = 10;

    // The ReturnMax will work for both int and double values

    // Return the larger of two integers
    int res = ReturnMax(num1, num2);
    std::cout << "Bigger one is: " << res << "\n";

    double n1 = 45.65;
    double n2 = 100.45;
    // Return the larger of two doubles
    double res2 = ReturnMax(n1, n2);

    std::cout << "Bigger one is: " << res2 << "\n";
}