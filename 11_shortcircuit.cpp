#include <iostream>
using namespace std;

int main(){
    int a = 10, b = 5, i = 5;

    if(a > b && ++i <= b) {
    }

    cout << i << endl;

    if(a < b && ++i <= b) {
    }

    cout << i << endl;
    return 0;
}

// Short-circuit evaluation is the process by which an expression is evaluated from left to right, and the evaluation stops as soon as the result is known.
// In the above code, the first if statement is true, so the second condition is checked and the value of i is incremented by 1.
// In the second if statement, the first condition is false, so the second condition is not checked and the value of i remains the same.