#include <iostream>
using namespace std;

class Base{
   public:
   Base(){
       cout<<"Non-Param Base"<<endl;
   }
   Base(int x){
       cout<<"Param of Base"<<endl;
   }
};

class Derived:public Base{
   public:
   Derived(){
       cout<<"Non-Param Derived"<<endl;
   }
   Derived(int a){
       cout<<"Param of Derived"<<endl;
   }
};

int main(){
  Derived d;
}


// #include <iostream>
// using namespace std;

// class Base{
//    public:
//    Base(){
//        cout<<"Non-Param Base"<<endl;
//    }
//    Base(int x){
//        cout<<"Param of Base"<<endl;
//    }
// };

// class Derived:public Base{
//    public:
//    Derived(){
//        cout<<"Non-Param Derived"<<endl;
//    }
//    Derived(int a){
//        cout<<"Param of Derived"<<endl;
//    }
// };

// int main(){
//   Derived d(10);
// }



// #include <iostream>
// using namespace std;

// class Base{
//    public:
//    Base(){
//        cout<<"Non-Param Base"<<endl;
//    }
//    Base(int x){
//        cout<<"Param of Base"<<endl;
//    }
// };

// class Derived:public Base{
//    public:
//    Derived(){
//        cout<<"Non-Param Derived"<<endl;
//    }
//    Derived(int a){
//        cout<<"Param of Derived"<<endl;
//    }
//    Derived(int x,int a):Base(x){
//        cout<<"Param of Derived"<<endl;
//    }
// };
// int main(){
//   Derived d(10,5);
// }