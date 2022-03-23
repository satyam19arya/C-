// #include <iostream>
// using namespace std;

// class Test{
//   private:int a;
//   protected:int b;
//   public:int c;
  
//   friend void fun();
// };

//  void fun(){
//    Test t;  
//    t.a=5;
//    t.b=4;
//    t.c=15;

//    cout<<t.a<<endl;
//    cout<<t.b<<endl;
//    cout<<t.c<<endl;
//  }

// int main(){
// fun();
//     return 0;
// }



#include  <iostream>
using namespace std;
class Your;
class My{
  private:int a;
  protected:int b;
  public:int c;

  friend Your;
};

class Your{
  public:
  My m;
  void fun(){
    m.a=5;
    m.b=6;
    m.c=7;

    cout<<m.a<<endl;
    cout<<m.b<<endl;
    cout<<m.c<<endl;
  }
};

int main(){
 Your y;
 y.fun();
  return 0;
}