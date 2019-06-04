#include <iostream>

using namespace std;

/*
1. Declare one integer and one double variable 
2. Declare two references of same type
3. Use initial variables and assign them upon 
   initialization to corresponding references 
4. Check references, write them out 
5. Change, modify variables 
6. Write references again
*/

int main() {
  int x;
  double y;

  int& ref_x = x;
  double& ref_y = y;

  cout << "Value of x reference : " << ref_x << endl;
  cout << "Value of y reference : " << ref_y << endl;

  x = 5;
  y = 11.7;

  cout << "Value of x reference : " << ref_x << endl;
  cout << "Value of y reference : " << ref_y << endl;

  return 0;
}