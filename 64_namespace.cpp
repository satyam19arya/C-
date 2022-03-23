#include <iostream>
using namespace std;
namespace First{
    void fun(){
        cout<<"First";
    }
}
namespace Second{
    void fun(){
        cout<<"Second";
    }
}
int main(){
    Second::fun();
    return 0;
}

// A namespace is designed to overcome this difficulty and is used as additional information 
// to differentiate similar functions, classes, variables etc. with the same name available in different libraries. 
// Using namespace, you can define the context in which names are defined. In essence, a namespace defines a scope.