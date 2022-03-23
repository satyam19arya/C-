#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int value =i;
        for(int j=1;j<=i;j++){
            cout<<value<<" ";
            value++;
        }
        cout<<endl;
    }
    return 0;
}

// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 
// 5 6 7 8 9

//char value ='A'+i-1;
// A 
// B C 
// C D E 
// D E F G 
// E F G H I