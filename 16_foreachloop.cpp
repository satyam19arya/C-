#include <iostream>
using namespace std;
int main(){
    int A[5]={2,4,5,7,8};
    for(auto x : A){
        cout<<x<<endl;
    }
    return 0;
}


//for each loop works with array
//it does not dpend upon the size but in for loop we have to declare the size
//Foreach loop is used to access elements of an array quickly without performing initialization, testing and increment/decrement.