#include <iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    for(int i=1;i<=2*n;i++){
        int c= i>n?2*n-i:i;
        for(int s=0;s<=n-c;s++){
            cout<<" "<<" ";
        }
        for(int j=c;j>=1;j--){
            cout<<j<<" ";
        }
        for(int j=2;j<=c;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
} 

//             1 
//           2 1 2
//         3 2 1 2 3
//       4 3 2 1 2 3 4
//     5 4 3 2 1 2 3 4 5
//   6 5 4 3 2 1 2 3 4 5 6
//     5 4 3 2 1 2 3 4 5
//       4 3 2 1 2 3 4 
//         3 2 1 2 3
//           2 1 2
//             1