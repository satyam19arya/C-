#include <iostream>
using namespace std;

class Base {
public:
    void fun1() {
        cout << "fun1 of Base" << endl;
    }
};

class Derived : public Base {
public:
    void fun2() {
        cout << "fun2 of Derived" << endl;
    }
};

int main() {
    Derived d;
    Base* ptr = &d;

    ptr->fun1();        // Accessing fun1() using the Base pointer
    // ptr->fun2();     // This line would cause a compilation error as fun2() is not accessible through Base pointer

    return 0;
}


// Example:2
// #include<iostream>
// using namespace std;

// class BasicCar {
// public:
//     void start() {
//         cout << "Car Started" << endl;
//     }
// };

// class AdvanceCar : public BasicCar {
// public:
//     void start() {
//         cout << "Playing Music" << endl;
//     }
// };

// int main() {
//     BasicCar b;
//     AdvanceCar *q = (AdvanceCar *)&b;  
//     q->start();
//     return 0;
// }