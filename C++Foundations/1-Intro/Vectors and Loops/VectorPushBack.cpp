#include <vector>
#include <iostream>
using std::vector;
using std::cout;

int main() {
    // Initial Vector
    vector<int> v {1, 2, 3};
     
    // Print the contents of the vector
    for (int i = 0; i < v.size(); i++) {
      cout << v[i] << "\n";
    }
    
    // Push 4 to the back of the vector
    v.push_back(4);

    // Print the contents again
    for (int i = 0; i < v.size(); i++) {
      cout << v[i] << "\n";
    }
    
}