#include<iostream>
using namespace std;

class Test {
    private:
        int num;

    public:
        Test() {
            this->num = 10;
        }

        Test(int num) {
            this->num = num;
        }

        // Member function to display num1
        void disp();

        // Friend function declaration
        friend void print();
};

void Test::disp() {
    cout << "T0 : Num : " << this->num << endl;
}

void print() {
    Test t1;
    t1.num = 600;  // Accessing private member directly
    cout << "T1 : Num : " << t1.num << endl;

    Test t2;
    cout << "T2 : Num : " << t2.num << endl;

    Test t3(40);
    cout << "T3 : Num : " << t3.num << endl;
}

int main(void) {
    Test t0;
    // t0.num = 400;  // This line would cause an error because num1 is private
    t0.disp();

    print();
    return 0;
}