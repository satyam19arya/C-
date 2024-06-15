#include<iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;
    
public:
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
    
    int perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    Rectangle r1;
    r1.setLength(10);  // Set length to 10
    r1.setBreadth(-5); // Attempt to set breadth to -5, which should be corrected to 0
    
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;
    cout << "Length: " << r1.getLength() << endl;

    return 0;
}