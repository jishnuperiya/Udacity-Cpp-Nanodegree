/*
String with mixed type
---------------------

in our previours examples, our string contained only whitespaces and characters, which could be easily converted
to int. if it has mixed type, more care is needed.
*/
#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using std::cout;

int main() 
{
    string b("1,2,3");

    istringstream my_stream(b);

    char c; // it will catch ,
    int n; // it will catch the numbers in string

    while (my_stream >> n >> c) { // this will fail in the third time as after there is no character
      cout << "That stream was successful:" << n << " " << c << "\n";
    }
    cout << "The stream has failed." << "\n"; 
}

