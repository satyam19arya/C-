#include <iostream>
using namespace std;

class Student {
public:
    int roll;     // Non-static member variable
    string name;  // Non-static member variable
    static int addNo;  // Static member variable

    Student(string n) {
        addNo++;
        roll = addNo;
        name = n;
    }

    void display() {
        cout << "Name: " << name << ", Roll no: " << roll << endl;
    }
};

// Initializing the static member variable addNo
int Student::addNo = 0;

int main() {
    Student s1("Shivam");
    Student s2("John");
    Student s3("Ravi");
    Student s4("Aman");
    Student s5("Kartik");
    Student s6("Satyam");

    s1.display();
    s6.display();

    return 0;
}