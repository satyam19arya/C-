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
//         cout << real << "+i" << img << endl;
//     }

//     // Overloading the + operator to add two complex numbers
//     Complex operator+(Complex x) {
//         Complex temp;
//         temp.real = real + x.real;
//         temp.img = img + x.img;
//         return temp;
//     }
// };

// int main() {
//     Complex c1(5, 10), c2(3, 4), c3;
    
//     // Using the overloaded + operator to add c1 and c2
//     c3 = c1 + c2;
//     c3.display();
    
//     return 0;
// }


// Method 2:
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
        cout << real << "+i" << img << endl;
    }

    // Method to add two complex numbers
    Complex add(const Complex &x) const {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};

int main() {
    Complex c1(5, 10), c2(3, 4), c3;
    
    // Using the add method to add c1 and c2
    c3 = c1.add(c2);
    
    c3.display();
    
    return 0;
}