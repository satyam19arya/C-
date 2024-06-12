#include <iostream>
using namespace std;

class Base {
public:
    virtual void fun1() = 0;  // Pure virtual function
    virtual void fun2() = 0;  // Pure virtual function
};

class Derived : public Base {
public:
    void fun1() override {
        cout << "fun1 of derived" << endl;
    }
    void fun2() override {
        cout << "fun2 of derived" << endl;
    }
};

int main() {
    Derived d;
    d.fun1();
    d.fun2();
    return 0;
}

// If we don't override the pure virtual functions in the derived class, then the derived class also becomes an abstract class.
// If a class contains at least one pure virtual function, then it becomes an abstract class.