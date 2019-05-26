#include <iostream>

class  Abstraction {
private:
    int number;
    char character;
public:
    void static PrintCharAsNumber(char c);
};

void Abstraction::PrintCharAsNumber(char c) {
    int result = c;
    std::cout << result << "\n";
}

int main() {
    char c = 'X';
    Abstraction::PrintCharAsNumber(c);
    // OUTPUT: 88
}