#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
    // Add your code here.
    vector<vector<int>> b {{1, 2},
                           {3, 4},
                           {5, 6}};

    // Write your double loop here.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << b[i][j] << "\n";
        }
    }
}