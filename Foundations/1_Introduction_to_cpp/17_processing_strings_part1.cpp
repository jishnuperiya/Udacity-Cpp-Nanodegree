/*
similarily how we streamed file into strings, in c++ we can stream strings into temporary variables.
one way to stream string is to use input string stream object istringstream (i stands for input) --> need sstream
header.

once an input string object is created, parts of the string can be streamed and stored using the extraction operator ">>".
extraction operator will read until whitespace is reached or until the stream fails.
*/

#include<iostream>
#include<sstream>

int main(){
    std::string s{" 12 3"};
    std::istringstream my_string_stream(s);
    int n;
    my_string_stream >> n;
    std::cout << n << "\n";
}