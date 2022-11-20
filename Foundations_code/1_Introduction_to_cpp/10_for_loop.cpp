#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
    // 1) NORMAL FOR LOOP:
    for (int i=-3; i<=10; i++ ){
        cout<<i<<"\n";
    }
    
    // 2) FOR LOOP WITH A CONTAINER:

    vector<int> a { 1, 2, 4 , 5};
    for(int i:a){
        cout<<i<<"\n";
    }

}