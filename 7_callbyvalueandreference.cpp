#include<iostream>
using namespace std;

// This will not swap a and b
void swap(int a, int b) { 
    int temp = a;
    a = b;
    b = temp;
}

// Call by reference using pointers
void swapPointer(int* a, int* b) { 
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using C++ reference Variables
void swapReferenceVar(int &a, int &b){ 
    int temp = a;          
    a = b;             
    b = temp;         
}

int main() {
    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    // swap(x, y); // This will not swap x and y
    // swapPointer(&x, &y); // This will swap x and y using pointer reference
    swapReferenceVar(x, y); // This will swap x and y using reference variables
    cout << "The value of x is " << x << " and the value of y is " << y << endl; 
    return 0;
}