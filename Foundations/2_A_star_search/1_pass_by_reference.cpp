
#include <iostream>
using std::cout;

int MultiplyByTwo(int &i) { // you just an ampersant here
    i = 2*i;
    return i;
}

int main() {
    int a = 5;
    cout << "The int a equals: " << a << "\n";
    int b = MultiplyByTwo(a); // you dont need ampersant in function call! IMPORTANT
    cout << "The int b equals: " << b << "\n";
    cout << "The int a now equals: " << a << "\n";
}