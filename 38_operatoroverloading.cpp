// Operator function as member function of a class
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

    void display() {
        cout << real << " + i" << img << endl;
    }

    // Overloading the + operator to add two complex numbers
    Complex operator+(Complex x) {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};

int main() {
    Complex c1(5, 10), c2(3, 4), c3;
    c1.display();
    c2.display();
    
    // Using the overloaded + operator to add objects c1 and c2
    c3 = c1 + c2;
    // c3 = c1.operator+(c2);
    c3.display();
    
    return 0;
}


// Method 2:
// #include <iostream>
// using namespace std;

// class Complex {
// private:
//     int real;
//     int img;

// public:
//     Complex(int r = 0, int i = 0) {
//         real = r;
//         img = i;
//     }

//     void display() {
//         cout << real << " + i" << img << endl;
//     }

//     // Method to add two Complex numbers
//     Complex add(const Complex &x) const {
//         Complex temp;
//         temp.real = real + x.real;
//         temp.img = img + x.img;
//         return temp;
//     }
// };

// int main() {
//     Complex c1(5, 10), c2(3, 4), c3;
//     c1.display();
//     c2.display();
    
//     // Using the add method to add objects c1 and c2
//     c3 = c1.add(c2);
//     c3.display();
    
//     return 0;
// }


// Operator function as non-member function of a class (global function)
// If we are using a non-member function to overload the operator, then operator+() takes two arguments.
// #include <iostream>
// using namespace std;

// class Complex {
// private:
//     int real;
//     int img;

// public:
//     Complex(int r = 0, int i = 0) {
//         real = r;
//         img = i;
//     }

//     void display() {
//         cout << real << " + i" << img << endl;
//     }

//     // Declaring the non-member function as a friend of the class
//     friend Complex operator+(Complex &x, Complex &y);
// };

// // Overloading the + operator to add two complex numbers
// Complex operator+(Complex &x, Complex &y) {
//     Complex temp;
//     temp.real = x.real + y.real;
//     temp.img = x.img + y.img;
//     return temp;
// }

// int main() {
//     Complex c1(5, 10), c2(3, 4), c3;
//     c1.display();
//     c2.display();
    
//     // Using the overloaded + operator to add objects c1 and c2
//     c3 = c1 + c2;
//     // c3 = operator+(c1, c2);
//     c3.display();
    
//     return 0;
// }