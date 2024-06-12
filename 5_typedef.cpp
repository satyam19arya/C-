#include <iostream>
using namespace std;

typedef struct employee {
    int eId;
    char favChar;
    float salary;
} ep;

int main() {
    ep satyam;
    satyam.eId = 1;
    satyam.favChar = 's';
    satyam.salary = 1200000;

    cout << "The value of eId is: " << satyam.eId << endl;
    cout << "The value of favChar is: " << satyam.favChar << endl;
    cout << "The value of salary is: " << satyam.salary << endl;

    return 0;
}

// typedef vs #define
// #define is a pre-processor directive whereas typedef is a keyword used to give data type a new name.
// typedef interpretation is performed by the compiler whereas #define statements are processed by the pre-processor.