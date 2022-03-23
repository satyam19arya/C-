#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        char value ='A'+n-i;
        for(int j=1;j<=i;j++){
            cout<<value<<" ";
            value++;
        }
        cout<<endl;
    }
    return 0;
}

// E 
// D E 
// C D E 
// B C D E 
// A B C D E 