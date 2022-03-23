#include <iostream>
using namespace std;
class Parent{
   private:int a;
   protected:int b;
   public:int c;
   void funParent(){
       a=10;
       b=5;
       c=15;
   }
};

class Child : public Parent{
    public:
    void funChild(){
       // a=5;  //a is private in parent
        b=15;
        c=20;
    }
};
class GrandChild : public Child{
    public: 
    void funGrandChild(){
       // a=5;   //a is private in parent
        b=15;
        c=20;
    }
};

int main(){
    Child d;
   // d.a=5;   //a is private member of parent
   // d.b=15;  //b is protected member of parent
    d.c=20;
    return 0;
}



// #include <iostream>
// using namespace std;
// class Parent{
//    private:int a;
//    protected:int b;
//    public:int c;

//    void funParent(){
//        a=10;
//        b=5;
//        c=15;
//    }
// };

// class Child : protected Parent{
//     public:
//     protected:
//     void funChild(){
//        // a=5;
//         b=15;
//         c=20;
//     }
// };

// class GrandChild : public Child{
//     public: 
//     void funGrandChild(){
//        // a=5;
//         b=15;
//         c=20;
//     }
// };
// int main(){
//     Child d;
//    // d.a=5;
//    // d.b=15;
//    // d.c=20;  //c is protected member of parent
//     return 0;
// }



// #include <iostream>
// using namespace std;
// class Parent{
//    private:int a;
//    protected:int b;
//    public:int c;
//    void funParent(){
//        a=10;
//        b=5;
//        c=15;
//    }
// };
// class Child : private Parent{
//     private:
//     public:
//     protected:
//     void funChild(){
//        // a=5;
//         b=15;
//         c=20;
//     }
// };
// class GrandChild : public Child{
//     public: 
//     void funGrandChild(){
//        // a=5;
//        // b=15;
//        // c=20;
//     }
// };
// int main(){
//     Child d;
//    // d.a=5;
//    // d.b=15;
//    // d.c=20;
//     return 0;
// }