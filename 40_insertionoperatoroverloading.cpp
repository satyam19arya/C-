#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    // Friend function to overload the << operator for output
    friend ostream & operator<<(ostream &out, Complex &c);
};

// Definition of the friend function to overload the << operator for output
ostream & operator<<(ostream &out, Complex &c) {
    out << c.real << "+i" << c.img;
    return out;
}

int main() {
    Complex c1(10, 5);
    cout << c1 << endl;
    return 0;
}

// ostream and istream standard objects such as cout and cin use a private copy constructors so they should be returned by reference not by value.