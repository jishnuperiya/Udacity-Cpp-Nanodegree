#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// Define a function "AdditionFunction" here.
// Instead of just two ints, this function should accept a vector<int> 
// as the argument, and it should return the sum of all the ints in the vector.
int AdditionFunction(vector<int> vec){
    int sum=0;
    for(auto i:vec){
        sum=sum+i;    // its range based for loop. if its index based for loop, you wouldve wrote sum=sum+vec[i]
    }
    return sum;
    
}

int main() 
{
    vector<int> v {1, 2, 3};
    
    // Uncomment the following line to call your function:
    cout << AdditionFunction(v) << "\n";
}