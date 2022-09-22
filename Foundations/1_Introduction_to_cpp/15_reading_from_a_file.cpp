/*
There are 4 steps to read from a file.
1) #include <fstream>.
2) create a std::ifstream object using the path to your file.
3) evaluate the std::ifstream object as bool to ensure the stream creation didnt fail
4) use while loop with getline to write the file lines to a string.
*/

#include <iostream>
#include <fstream>
using std::cout;
using std::ifstream;
using std::string;

int main(){

ifstream file_stream_object;
file_stream_object.open("1.board");

    if (file_stream_object){
        cout<<"stream object has been succesfully created"<<"\n";
        string line;
        while(getline(file_stream_object,line)){
            cout<<line<<"\n";
        
        }       
        
    }

}