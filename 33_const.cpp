#include <iostream>
using namespace std;

int main(){
    int *a = new int;
    *a = 2;
    cout << *a << endl;
    delete a;
    
    int b = 5;
    a = &b;
    cout << *a << endl;
    
    //--------------------------------------------------------------------------
    // constant data, non-const pointer
    
    // const int *a = new int(5); 
    // // int const *a = new int(5);  // same as above line
    // cout << *a << endl;
    // // *a = 7;                  // can't change the content of pointer because data is constant
    // // cout << *a << endl;
    
    // int b = 7;
    // a = &b;                    //pointer itself can be reassigned
    // cout<<*a<<endl;
    
    //--------------------------------------------------------------------------
    // constant pointer, non-constant data
    
    // int *const a = new int(9);
    // cout << *a << endl;
    // *a = 15;
    // cout << *a << endl;
    
    // // int b = 7;
    // // a = &b;   // error: assignment of read-only variable 'a'
    // // cout<<*a<<endl;
    
    //--------------------------------------------------------------------------
    // constant pointer, constant data
    
    const int b = 7;  // data is constant
    const int *const a = &b; // pointer is constant (can't change the address)
    cout << *a << endl;
    cout << b << endl;
    // *a = 15; // can't change the content of pointer because data is constant
    // b++; // error: increment of read-only variable 

    int c = 9;
    // a = &c; // error: assignment of read-only variable 'a'


    //--------------------------------------------------------------------------
    // constant data
    const float PI = 3.14;
    const float *fptr; // (Here, pointer is non-constant, but the data is constant so we can't change the data using pointer but we can change the pointer itself to point to another data.)
    fptr = &PI; // pointer is pointing to constant value

    cout << "\nPI = " << PI << " *fptr = " << *fptr << " \n";

    // PI++; // error: increment of read-only variable ‘PI’

    // *fptr = 5.15; // error: assignment of read-only location ‘*fptr’

    float f_val = 20.5;
    fptr = &f_val; // pointer is pointing to non-constant value

    cout << "\nf_val = " << f_val << " *fptr = " << *fptr << " \n";

    f_val++;
    // *fptr = 70.6; // error: assignment of read-only location ‘*fptr’

    cout << "\nf_val = " << f_val << " *fptr = " << *fptr << " \n";

    return 0;
}