#include <iostream>
using namespace std;

class Base{
  public:
  void display(){
      cout<<"Display of Base"<<endl;
  }
};

class Derived:public Base{
    public:
    void display(){
      cout<<"Display of Derived"<<endl;
    }
};

int main(){
    Derived d;
    d.display();
    return 0;
}

//If derived class defines same function as defined in its base class,
//it is known as function overriding in C++. It is used to achieve runtime polymorphism.