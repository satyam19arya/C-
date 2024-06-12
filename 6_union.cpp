#include <iostream>
using namespace std;

union money {
    int rice;
    char car;
    float salary;
};

int main() {
    union money satyam;
    satyam.rice = 1;
    cout << "The value is: " << satyam.rice << endl;

    satyam.car = 's';
    cout << "The value is: " << satyam.car << endl;

    satyam.salary = 1200000;
    cout << "The value is: " << satyam.salary << endl;

    // Accessing previous values now would lead to undefined behavior
    // cout << "The value of rice is: " << satyam.rice << endl;
    // cout << "The value of car is: " << satyam.car << endl;

    return 0;
}

// Union is a user defined data type which is similar to structure.
// In union, all members share the same memory location.
// The size of union will be the size of the largest member.
// We can only access one member of union at a time.