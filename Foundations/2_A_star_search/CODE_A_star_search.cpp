// Istringstream: Objects of this class use a string buffer that contains a sequence of characters. This sequence of characters can be accessed directly as a string object

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using std::cout;
using std::vector;
using std::string;
using std::ifstream;
using std::istringstream;


enum class State {kEmpty,kObstacle};

vector<State> ParseLine(string line){
    cout << "worked so far";
    istringstream sline(line);
    int n;
    char c;
    vector<State> row;
    while (sline >> n >> c && c == ','){
        if (n==0){
            row.push_back(State::kEmpty);
        } else {
            row.push_back(State::kObstacle);
        }
    }

    return row;  
}  


vector<vector<State>> ReadBoardFile(string path){
    ifstream myfile (path);
    vector<vector<State>> board {};
    if (myfile) { 
        string sline;
        while (getline(myfile,sline)){
            vector<State> row = ParseLine(sline);
            board.push_back(row);
            }
        
    }

    return board;
    
}


// TODO: Write the Heuristic function here.

int Heuristic(int x1, int y1, int x2, int y2) {
  return abs(x2 - x1) + abs(y2 - y1);
}


/** 
 * Implementation of A* search algorithm
 */

vector<vector<State>> Search(vector<vector<State>> board, int init[2], int goal[2]){

cout <<"No path found!";
return vector<vector<State>> {};
}



string CellString(State cell) {
  switch(cell) {
    case State::kObstacle: return "⛰️   ";
    default: return "0   "; 
  }
}

void PrintBoard(const vector<vector<State>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << CellString(board[i][j]);
    }
    cout << "\n";
  }
}

int main(){

int init[2]={0,0};
int goal[2]={4,5};

auto board = ReadBoardFile("1.board");
auto solution = Search(board,init,goal);
PrintBoard(solution);

}