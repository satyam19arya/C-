#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;   
    for(int row=0;row <= n;row++){
        //first number triangle
        int firstTriangle = n-row;
        for(int col=1;col<=firstTriangle;col++){
            cout<<col<<" ";
        }
        firstTriangle--;
        
        //second star triangle
        for(int numberOfStars=row*2;numberOfStars>=1;numberOfStars--){
            cout<<'*'<<" ";
        }
        
        //third number triangle
        int thirdTriangle = n-row;
        int col2 = n-row;
        while(thirdTriangle >=1){
            cout<<col2<<" ";
            col2--;
            thirdTriangle--;
        }       
        cout<<endl;
    }
    return 0;
}

// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1 
// 1 2 3 * * * * 3 2 1 
// 1 2 * * * * * * 2 1 
// 1 * * * * * * * * 1 