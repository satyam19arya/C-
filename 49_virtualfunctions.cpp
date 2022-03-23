// #include <iostream>
// using namespace std;

// class Base{
//   public:
//   void display(){
//       cout<<"Display of Base"<<endl;
//   }
// };

// class Derived:public Base{
//     public:
//     void display(){
//       cout<<"Display of Derived"<<endl;
//     }
// };

// int main(){
//     Derived d;
//     d.display();
//     Base* ptr=&d;
//     ptr->display();
//     return 0;
// } 



#include <iostream>
using namespace std;

class Base{
  public:
  virtual void display(){
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
    Base* ptr=&d;
    ptr->display();
    return 0;
}

//A virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class.
//Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism.