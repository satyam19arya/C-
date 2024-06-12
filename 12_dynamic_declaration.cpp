#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    if (true) {
        int c = a + b;
        cout << c << endl;
    }

    // Inner block
    {
        int d = a - b;
        if (true) {
            cout << d << endl;
        }
    }

    if (int e = a * b) { 
        cout << e << endl;
    }

    return 0;
}

// Dynamic declaration is a feature that allows you to declare variables within a block of code.
// The scope of the variable is limited to the block in which it is declared.
// In C, all variables declare in the beginning & that's the drawback of C