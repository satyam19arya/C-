#include<iostream>
using namespace std;

int x = 10; // Global variable

int main() {
    int x = 20; // Local variable x with value 20, shadows the global variable x

    {
        int x = 30;
        cout << x << endl;
    }

    cout << x << endl;
    cout << ::x << endl; // (Accesses the global variable x using the scope resolution operator)
}