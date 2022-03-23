#include <iostream>
using namespace std;

int max(int a, int b){
   if(a>b)
   cout<<a<<endl;
   else
   cout<<b<<endl;
}

int min(int a, int b){
   if(a<b)
   cout<<a;
   else
   cout<<b;
}

int main(){
    int (*p)(int,int);  //declaration
    p=max;              //initialization
    (*p)(10,5);         //function calling
    p=min;
    (*p)(6,7);
    return 0;
}