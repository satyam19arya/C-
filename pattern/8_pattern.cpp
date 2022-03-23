#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";   //n-j+1 then ulta hoo jayega
        }
        cout<<endl;
    }
    return 0;
}

// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5
// 1 2 3 4 5

//char ch='A'+j-1;
//cout<<ch<<" ";  
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 