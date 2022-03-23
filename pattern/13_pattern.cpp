#include <iostream>
using namespace std;
int main(){
    
    int n,j;
    cin>>n;
    for(int i=0;i<2*n;i++){
        int totalcolinrows= i>n?2*n-i:i;
        int noofspaces=n-totalcolinrows;
        for(int s=0;s<noofspaces;s++){
            cout<<" ";
        }
        for(int j=0;j<totalcolinrows;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//     * 
//    * * 
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *