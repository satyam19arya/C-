#include <iostream>
using namespace std;
int main(){
    int count = 1;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 21 


//char count = 'A';
// A 
// B C 
// D E F 
// G H I J 
// K L M N O 