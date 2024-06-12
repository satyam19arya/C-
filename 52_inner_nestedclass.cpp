#include <iostream>
using namespace std;

class Outer {
public:
    void fun() {
        i.display();   // Accessing inner class method from outer class method
    }

    class Inner {
    public:
        void display() {
            cout << "Display of inner" << endl;
        }
    };

    Inner i;  // Creating an object of Inner class as a member of Outer class
};

int main() {
    Outer o;
    o.fun();
    return 0;
}