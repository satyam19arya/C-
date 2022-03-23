#include <iostream>
using namespace std;

class Demo{
  public:
  Demo(){
    cout<<"Constructor of Demo"<<endl;
  }
  ~Demo(){
      cout<<"Destructor of Demo"<<endl;
  }
};

  void fun(){
      Demo *ptr = new Demo();   //Comment any one
      delete ptr;
  }


int main(){
    fun();
    return 0;
}

//once the function ends,destructor automatically called
// Destructors in C++ are members functions in a class that delete an object. 
// They are called when the class object goes out of scope such as when the function ends, the program ends, a delete variable is called etc.