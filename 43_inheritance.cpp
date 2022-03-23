#include <iostream>
using namespace std;

class Base{
   public:
   int a;
   void display(){
       cout<<a<<endl;
   }
};

class Derived : public Base{
    public:
    void show(){
        cout<<a<<endl;
    }
};

int main(){
 Derived d;
 d.a=10;
 d.display();
 d.show();
 return 0;
}
