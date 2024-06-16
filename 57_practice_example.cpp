#include<iostream>
#include<string>
using namespace std;

class ArithmeticException {
    private:
        string name;
    public:
        // Default constructor
        ArithmeticException() : name("") {}

        // Parameterized constructor
        ArithmeticException(string name) : name(name) {}

        void disp() const {
            cout << this->name << endl;
        }

        // Method to accept a number by reference
        void accept(int &num) const {
            cout << "Enter Number value: ";
            cin >> num;
        }
};

int main() {
    ArithmeticException e("Division is not possible because num2 is zero");
    int num1, num2;
    int res;

    e.accept(num1);
    e.accept(num2);

    cout << "Num1 : " << num1 << " Num2 : " << num2 << endl;

    try {
        if (num2 == 0)
            throw e;
        else {
            res = num1 / num2;
            cout << "\nResult = " << res << endl;
        }
    }
    catch (ArithmeticException& e) {
        e.disp();
    }

    return 0;
}