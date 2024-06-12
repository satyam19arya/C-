#include<iostream>
using namespace std;

// Function to dynamically allocate memory for an array and initialize its elements
int* fun() {
    // Dynamically allocate memory for an array of 5 integers
    int* p = new int[5];

    // Initialize array elements
    for(int i = 0; i < 5; i++) {
        p[i] = 5 * i;
    }
    
    // Output the address of the first element of the array
    cout << p << endl;
    
    // Return the address of the first element of the array
    return p;
}

int main() {
    // Call the fun function to obtain the address of the dynamically allocated array
    int* q = fun();

    // Output the address obtained from the function
    cout << q << endl;

    // Output the elements of the dynamically allocated array
    for(int i = 0; i < 5; i++) {
        cout << q[i] << endl;
    }

    // Deallocate the dynamically allocated memory to avoid memory leaks
    delete[] q;

    return 0;
}