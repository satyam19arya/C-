#include <iostream>
using namespace std;

typedef struct employee {
    int eId;
    char favChar;
    float salary;
    void accept() {} // In case of C Programming, we can't define functions inside a structure.
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


class MyClass {
public:
    void display() {
        std::cout << "Hello from MyClass!" << std::endl;
    }
};

typedef MyClass MC;

int main() {
    MC obj;
    obj.display();
    return 0;
}