#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// TODO: Add PrintBoard function here.

void PrintBoard (const vector<vector<int>> board){ // const since you just print 

    for(auto inner_vector:board){
        for(int vec_element : inner_vector){
            cout << vec_element << "\t";
        }
        cout << "\n";
    }
}  

int main() {
  vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0}};
  // TODO: Call PrintBoard function here.
  PrintBoard(board);
 }