// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private
// Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class binary{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary::read(void){
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void){
    for (int i = 0; i < s.length(); i++){
        if (s.at(i) != '0' && s.at(i) != '1'){
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void){
    chk_bin();
    for (int i = 0; i < s.length(); i++){
        if (s.at(i) == '0'){
            s.at(i) = '1';
        }
       else{
            s.at(i) = '0';
        }
    }
}

void binary::display(void){
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++){
        cout << s.at(i);
    }
    cout<<endl;
}

int main(){
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}



//Example 2: 
// #include<iostream>
// using namespace std;

// class Employee{
//     private:
//         int a, b, c;
//     public:
//         int d, e;
//         void setData(int a1, int b1, int c1); // Declaration
//         void getData(){
//             cout<<"The value of a is "<<a<<endl;
//             cout<<"The value of b is "<<b<<endl;
//             cout<<"The value of c is "<<c<<endl;
//             cout<<"The value of d is "<<d<<endl;
//             cout<<"The value of e is "<<e<<endl;
//         }
// };

// void Employee :: setData(int a1, int b1, int c1){
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main(){
//     Employee harry;
//     // harry.a = 134; -->This will throw error as a is private
//     harry.d = 34;
//     harry.e = 89;
//     harry.setData(1,2,4);
//     harry.getData();
//     return 0;
// }