#include<iostream>
#include<fstream>

using std::ifstream;
using std::cout;

void ReadBoardFile(const std::string file_path){

ifstream board_file;
board_file.open(file_path);

    if (board_file){
        cout<<"The file is read succesfully"<<"\n";
        std::string line;
        while(getline(board_file,line)){
            cout<<line<<"\n";
        }
    }

}

int main(){
    ReadBoardFile("1.board");
}
