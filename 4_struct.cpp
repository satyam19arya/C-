#include <iostream>
using namespace std;

struct employee {
    int eId;
    char favChar;
    float salary;
};

int main() {
    struct employee satyam;
    satyam.eId = 1;
    satyam.favChar = 's';
    satyam.salary = 1200000;

    cout << "The value of eId is: " << satyam.eId << endl;
    cout << "The value of favChar is: " << satyam.favChar << endl;
    cout << "The value of salary is: " << satyam.salary << endl;

    return 0;
}