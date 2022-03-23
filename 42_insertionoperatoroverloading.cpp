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

   friend ostream & operator<<(ostream &out,Complex &c);
};

ostream & operator<<(ostream &out,Complex &c){
    out<<c.real<<"+i"<<c.img<<endl;
}

int main(){
    Complex c1(10,5);
    cout<<c1;
    //Another method c1.display();
    return  0;
}

//ostream and istream standard objects such as cout and cin use a private copy constructors
//so they should be returned by reference not by value.