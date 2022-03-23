#include <iostream>
using namespace std;

class Base{
    public:
    virtual void fun1()=0; //pure virtual function
    virtual void fun2()=0;
};

class Derived : public Base{
    public:
    void fun1(){
        cout<<"fun1 of derived"<<endl;
    }
    void fun2(){
        cout<<"fun2 of derived"<<endl;
    }
};
int main(){
    Derived d;
    d.fun1();
    d.fun2();
    return 0;
}

//if a class is having pure virtual function then that class is called abstract class.
//we cannot create object of that class.
//we can create pointer of that class to achieve polymorphism.