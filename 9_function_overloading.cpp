#include<iostream>
using namespace std;

// Function to calculate sum of two integers
int sum(float a, int b) {
    cout << "Using function with 2 arguments" << endl;
    return a + b;
}

// Function to calculate sum of three integers
int sum(int a, int b, int c) {
    cout << "Using function with 3 arguments" << endl;
    return a + b + c;
}

// Function to calculate the volume of a cylinder
int volume(double r, int h) {
    return (3.14 * r * r * h);
}

// Function to calculate the volume of a cube
int volume(int a) {
    return (a * a * a);
}

// Function to calculate the volume of a rectangular box
int volume(int l, int b, int h) {
    return (l * b * h);
}

int main() {
    // Demonstrating sum functions
    cout << "The sum of 3 and 6 is " << sum(3, 6) << endl;
    cout << "The sum of 3, 7 and 6 is " << sum(3, 7, 6) << endl;

    // Demonstrating volume functions
    cout << "The volume of cuboid of 3, 7 and 6 is " << volume(3, 7, 6) << endl;
    cout << "The volume of cylinder of radius 3 and height 6 is " << volume(3, 6) << endl;
    cout << "The volume of cube of side 3 is " << volume(3) << endl;

    return 0;
}