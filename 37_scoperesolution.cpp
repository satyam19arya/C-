#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(const Rectangle &r);

    void setLength(int l);
    void setBreadth(int b);
    int getLength();
    int getBreadth();
    int area();
    bool isSquare();
    ~Rectangle();
};

int main() {
    Rectangle r(10, 5);
    cout << "Area: " << r.area() << endl;
    return 0;
}

Rectangle::Rectangle() {
    length = 0;
    breadth = 0;
}

Rectangle::Rectangle(int l, int b) {
    length = l;
    breadth = b;
}

Rectangle::Rectangle(const Rectangle &r) {
    length = r.length;
    breadth = r.breadth;
}

void Rectangle::setLength(int l) {
    length = l;
}

void Rectangle::setBreadth(int b) {
    breadth = b;
}

int Rectangle::getLength() {
    return length;
}

int Rectangle::getBreadth() {
    return breadth;
}

int Rectangle::area() {
    return length * breadth;
}

bool Rectangle::isSquare() {
    return length == breadth;
}

Rectangle::~Rectangle() {
    cout << "Rectangle destroyed" << endl;
}