#include <iostream>
using namespace std;

int & fun(int &a){
   cout<<a<<endl;
   return a;
}

int main(){
    int x=10;
    fun(x)=25;
    cout<<x<<endl;
}

//usually a function returns a value. but return by reference means,
//it will return the variable itself.
//y=fun(x); return a value