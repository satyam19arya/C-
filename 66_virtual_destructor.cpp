#include <iostream>
using namespace std;
class Base{
  public:
  Base(){
      cout<<"Base constructor"<<endl;
  }
  ~Base(){
      cout<<"Base destructor"<<endl;
  }
};

class Derived : public Base{
  public:
  Derived(){
      cout<<"Derived constructor"<<endl;
  }
  ~Derived(){
      cout<<"Derived destructor"<<endl;
  }
};

int main(){
    Derived d;
    return 0;
}




// #include <iostream>
// using namespace std;

// class Base{
//  public:
//   ~Base(){
//        cout<<"Base destructor"<<endl;
//    }
// };
// class Derived : public Base{
//  public:
//   ~Derived(){
//        cout<<"Derived destructor"<<endl;
//    }
// };

// void fun(){
//     Base *ptr=new Derived();
//     delete ptr;
// }

// int main(){
//     fun();
//     return 0;
// }




// #include <iostream>
// using namespace std;

// class Base{
//  public:
//   virtual ~Base(){
//        cout<<"Base destructor"<<endl;
//    }
// };
// class Derived : public Base{
//  public:
//   ~Derived(){
//        cout<<"Derived destructor"<<endl;
//    }
// };

// void fun(){
//     Base *ptr=new Derived();
//     delete ptr;
// }

// int main(){
//     fun();
//     return 0;
// }