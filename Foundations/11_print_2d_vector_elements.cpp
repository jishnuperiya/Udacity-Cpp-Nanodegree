#include<iostream>
#include<vector>

using std::cout;
using std::vector;

int main(){

    vector<vector<int>> b {{1, 2},
                           {3, 4},
                           {5, 6}};

    for(auto v  : b){ // where v is an inner vector of the vector b.
        for(int i: v){  // where i is the element in an inner vector
            cout<<i<<"\t";  // dont do v[i] because i is not index but the element in the vector--> its range based for loop. not index based.
        }
        cout<<"\n";
    }
}