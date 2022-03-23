//static member function can access only static data members of a class
//static members can be access by using the object as well as class
//static functions will not access data members of an object. They can access static members of a class.
//static functions are called as functions of a class. Other functions are called as functions of an object.

#include <iostream>
using namespace std;

class Test{
   public:
   int a;
   static int count;
   Test(){
       a=5;
       count++;
   }

};
int Test::count=0;

int main(){
    Test t1,t2;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    t2.count=25;
    cout<<t2.count<<endl;
    cout<<Test::count<<endl;
    return 0;
}


//static functions
// #include <iostream>
// using namespace std;
// class Test{
//    public:
//    int a;
//    static int count;
//    Test(){
//        a=5;
//        count++;
//    }

//    static int getCount(){
//        return count;
//    }

// };
// int Test::count=0;

// int main(){
//     Test t1;
//     cout<<t1.getCount()<<endl;

//     cout<<Test::getCount()<<endl;
//     return 0;
// }