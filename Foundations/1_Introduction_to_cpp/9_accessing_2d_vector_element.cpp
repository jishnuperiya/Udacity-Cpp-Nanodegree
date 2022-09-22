#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    vector<vector<int>> b = {{1, 1, 2, 3},
                             {2, 1, 2, 3},
                             {3, 1, 2, 3}};
    cout<< b[0][2];  // means take the 3rd element of the first vector --> here it will print 2

    // to get vector lenght:
    cout<< b[0].size()<<"\n";
    
}