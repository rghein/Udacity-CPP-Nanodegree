/*
   Write a function calledReadBoardFile which reads 
   lines from a file. Write each line to cout, followed by 
   a newline character "\n". The function should accept 
   a string argument, which represents the path to the file. 
   For now, ReadBoardFile does not need to return anything, 
   so use a void return type.
   Call ReadBoardFile from main using the argument "1.board".
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using std::fstream;
using std::cout;
using std::string;
using std::vector;

// TODO: Add the ReadBoardFile function here.
void ReadBoardFile (string file) {
    std::ifstream my_file;
    my_file.open(file);

    if (my_file) 
    {
        std::string line;
        
        while (getline(my_file, line)) 
        {
            cout << line << "\n";
        }
    }
}

// PrintBoard not used in this exercise
void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

int main() {
  // TODO: Call the ReadBoardFile function here.    
  ReadBoardFile("files/1.board");
  
  // Leave the following line commented out.
  // PrintBoard(board);
}
