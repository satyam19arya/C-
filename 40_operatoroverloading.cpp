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
  Complex operator+(Complex x){
      Complex temp;
      temp.real=real+x.real;
      temp.img=img+x.img;
      return temp;
  }
};

int main(){
    Complex c1(5,10),c2(3,4),c3;
    c3=c1+c2;
    c3.display();
    return 0;
}

//Method 2:
// #include <iostream>
// using namespace std;

// class Complex{
//  int real;
//  int img;
//  public:
//   Complex(int r=0,int i=0){
//       real=r;
//       img=i;
//   }
//   void display(){
//       cout<<real<<"+i"<<img<<endl;
//   }
//   Complex add(Complex x){
//       Complex temp;
//       temp.real=real+x.real;
//       temp.img=img+x.img;
//       return temp;
//   }
// };

// int main(){
//     Complex c1(5,10),c2(3,4),c3;
//     c3=c1.add(c2);
//     c3.display();
//     return 0;
// }