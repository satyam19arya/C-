#include <iostream>
using namespace std;

// It then returns the reference itself
int & fun(int &a) {
    cout << a << endl;
    return a;
}

int main() {
    int x = 10;
    fun(x) = 25; // Call fun with x as argument and assign 25 to the result of fun(x)
    cout << x << endl;
    return 0;
}