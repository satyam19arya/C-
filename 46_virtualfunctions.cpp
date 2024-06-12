#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Display of Base" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Display of Derived" << endl;
    }
};

int main() {
    Derived d;
    d.display();

    Base* ptr = &d;
    ptr->display();

    return 0;
}


#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Display of Base" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Display of Derived" << endl;
    }
};

int main() {
    Derived d;
    d.display();

    Base* ptr = &d;
    ptr->display();

    return 0;
}