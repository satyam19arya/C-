//static data member - That variable is going to share memory with all the objects of the class
//static member function - That function is going to share memory with all the objects of the class
//static member function can access only static data members of a class
//static members can be access by using the object as well as class
//static functions will not access data members of an object. They can access static members of a class.

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

int Test::count=0;  //hum kisi obj t1, t2 ke count ko increment nhi kar rhe hum class ke count ko increment kar rhe (means yeah ek class ka variable hai) means uss class ke sare objects ke liye same hoga

int main(){
    Test t1,t2;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    cout<<Test::count<<endl;
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