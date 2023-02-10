#include<iostream>
using namespace std;

// This will not swap a and b
void swap(int a, int b){ 
    int temp = a;        
    a = b;               
    b = temp;            
}

// Call by reference using pointers
void swapPointer(int* a, int* b){ 
    int temp = *a;         //swaping the data
    *a = *b;               
    *b = temp;            
}

// Call by reference using C++ reference Variables
void swapReferenceVar(int &a, int &b){ 
    int temp = a;          
    a = b;             
    b = temp;         
}

int main(){
    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y); // This will not swap a and b
    // swapPointer(&x, &y); //This will swap a and b using pointer reference
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}

//When we use call by reference the function automatically becomes inline
//reference doesn't consume any memory because it's like a alias only