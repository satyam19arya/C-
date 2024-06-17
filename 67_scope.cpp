#include <iostream>
using namespace std;

int num6; // Program Scope: Accessible from any part of the program after this point
static int num5; // File Scope: Accessible only within this file

namespace ntest
{
    int num4; // Namespace Scope: Accessible anywhere within this namespace

    class Test {
    public:
        void display()
        {
            int num3 = 3; // Class Scope: Accessible only to members of the Test class
            cout << "(Class Scope): " << num3 << endl;
        }
    };
}

void sum(int num1, int num2) { // Prototype Scope: num1 and num2 are accessible only within the sum function
    int result = num1 + num2; // Function Scope within sum: Accessible only within the sum function
    cout << "(Function Scope): " << result << endl;
}

int main(void) {
    int num1 = 10; // Function Scope: Accessible anywhere within the main function after this point

    while (true) {
        int temp = 0; // Block Scope: Accessible only within this while loop block
        if (temp == 0) temp = 1;
        break;
    }

    ntest::Test obj;
    obj.display(); // Accessing class scope variable

    sum(num1, 20);
    
    num6 = 5; // Accessing program scope variable
    cout << "(Program Scope): " << num6 << endl;

    num5 = 15; // Accessing file scope variable
    cout << "(File Scope): " << num5 << endl;

    ntest::num4 = 25; // Accessing namespace scope variable
    cout << "(Namespace Scope): " << ntest::num4 << endl;

    return 0;
}