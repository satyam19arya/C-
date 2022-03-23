//Inner class can access the members of outer class if they are static

#include <iostream>
using namespace std;

class Outer{
public:
void fun(){
    i.display();   //outer class can use the object of inner class
}

  class Inner{
      public:
      void display(){
          cout<<"Display of inner"<<endl;
      }
  };
  Inner i;
};
int main(){
    Outer o;
    o.fun();
    return 0;
}