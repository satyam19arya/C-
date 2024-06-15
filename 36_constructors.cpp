#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Default constructor
    Rectangle() {
        cout << "Default constructor called " << this << endl;
        length = 1;
        breadth = 1;
    }

    // Parameterized constructor
    Rectangle(int l, int b) {
        cout << "Parameterized constructor called " << this << endl;
        setLength(l);
        setBreadth(b);
    }

    // Copy constructor
    Rectangle(const Rectangle &r) {
        cout << "Copy constructor called " << this << endl;
        length = r.length;
        breadth = r.breadth;
    }

    void setLength(int l) {
        if (l >= 0)
            length = l;
        else
            length = 0;
    }

    void setBreadth(int b) {
        if (b >= 0)
            breadth = b;
        else
            breadth = 0;
    }

    int getLength() {
        return length;
    }

    int getBreadth() {
        return breadth;
    }

    int area() {
        return length * breadth;
    }

    ~Rectangle() {
        cout << "Destructor called " << this << endl;
    }
};

int main() {
    Rectangle r1;  // Default constructor
    Rectangle r2(10, 5);  // Parameterized constructor
    Rectangle r3(r2);  // Copy constructor

    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
    cout << "Area of r3: " << r3.area() << endl;

    return 0;
}

// Destructor uses stack memory, so it is called in reverse order of the constructors.