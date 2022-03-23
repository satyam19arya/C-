#include <iostream>
using namespace std;

class Complex{
 int real;
 int img;
 public:
  Complex(int r=0,int i=0){
      real=r;
      img=i;
  }
  void display(){
      cout<<real<<"+i"<<img<<endl;
  }
  friend Complex operator+(Complex c1,Complex c2);
};

  Complex operator+(Complex c1,Complex c2){
      Complex temp;
      temp.real=c2.real+c1.real;
      temp.img=c2.img+c1.img;
      return temp;
  }

int main(){
    Complex c1(5,10),c2(3,4),c3;
    c3=c1+c2;
    c3.display();
    return 0;
}