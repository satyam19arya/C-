#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// 1 1 1 1 1 
// 2 2 2 2 
// 3 3 3 
// 4 4
// 5


//for(int j=1;j<=i;j++){
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 


//char ch='A'+i-1;
//cout<<ch<<" ";
// A A A A A 
// B B B B
// C C C
// D D
// E