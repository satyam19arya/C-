#include <iostream>
using namespace std;

int main(){
    int *a = new int;
    *a = 2;
    cout<<*a<<endl;
    delete a;
    
    int b = 5;
    a = &b;
    cout<<*a<<endl;
    
    //--------------------------------------------------------------------------
    //constant data, non-const pointer
    
    // const int *a = new int(5); 
    // // int const *a = new int(5);  //same as above line
    // cout<<*a<<endl;
    // // *a = 7;                  //can't change the content of pointer because data is constant
    // // cout<<*a<<endl;
    
    // int b = 7;
    // a = &b;                    //pointer itself can be reassigned
    // cout<<*a<<endl;
    
    //--------------------------------------------------------------------------
    //constant pointer, non-constant data
    
    // int *const a = new int(9);
    // cout<<*a<<endl;
    // *a = 15;
    // cout<<*a<<endl;
    
    // // int b = 7;
    // // a = &b;           //do not run because now pointer is constant       
    // // cout<<*a<<endl;
    
    //--------------------------------------------------------------------------
    //constant pointer, constant data
    
    // const int *const a = new int(10);
    // cout<<*a<<endl;
    
    return 0;
}