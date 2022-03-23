#include <iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    for(int i=1;i<=2*n;i++){
        int totalcolinrows= i>n?2*n-i:i;
        for(int j=1;j<=totalcolinrows;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// * 
// * *
// * * *
// * * * *
// * * * * *
// * * * *       //here i>n & we have to delete space
// * * *
// * *
// *