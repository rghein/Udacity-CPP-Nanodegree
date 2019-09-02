#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ifstream my_file;
    my_file.open("files/1.board");
    
    if (my_file) 
    {
      std::cout << "The file stream has been created!" << "\n";
    }    
}