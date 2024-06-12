#include <iostream>
using namespace std;

namespace First {
    void fun() {
        cout << "First";
    }
}

namespace Second {
    void fun() {
        cout << "Second";
    }
}

int main() {
    Second::fun();  // Calls the fun() function from the Second namespace
    return 0;
}