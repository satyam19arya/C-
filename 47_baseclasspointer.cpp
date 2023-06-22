#include <iostream>
using namespace std;

class Base{
  public:
  void fun1(){
       cout<<"fun1 of Base"<<endl;
  }
};

class Derived : public Base{
  public:
  void fun2(){
      cout<<"fun2 of Derived"<<endl;
  }
};

int main(){
    Derived d;
    Base* ptr=&d;
    ptr->fun1();
   // ptr->fun2();  this function cannot be call
    return 0;
} 
//A pointer of one class can point to other class, but classes must be a base and derived class,then it is possible.
//To access the variable of the base class, base class pointer will be used.
//So, a pointer is type of base class, and it can access all, public function and variables of base class since pointer is of base class, this is known as binding pointer
//In this pointer base class is owned by base class but points to derived class object.



//Example:2
// #include<iostream>
// using namespace std;
// class BasicCar{
//     public:
// 	void start(){
// 		cout<<"Car Started"<<endl;
// 	}
// };
    
// class AdvanceCar:public BasicCar{
//     public:
// 	void start(){
// 		cout<<"Playing Music"<<endl;
// 	}	
// };    
// int main(){
// 	BasicCar b;
// 	AdvanceCar *q= (AdvanceCar *)&b;
//   q->start();   
// }