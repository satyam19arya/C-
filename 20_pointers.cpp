#include <iostream>
using namespace std;

int main(){
    int A[5]={2,4,6,8,10};
    int *p=A,*q=&A[4];
    cout<<*p<<endl;
        
    p++;
    cout<<*p<<endl;
        
    p--;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<p+2<<endl;
    cout<<*p<<endl;
    cout<<*(p+2)<<endl;
    cout<<q-p<<endl;
    cout<<p-q;

    //Pointers basics
    int a = 5;
    int *ptr = &a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(ptr)<<endl;
    
    a=a+1;
    cout<<a<<endl;
    *ptr=*ptr+1;
    cout<<*ptr<<endl;
    cout<<a<<endl;
    ptr=ptr+2;
    cout<<ptr<<endl;
    
    int *m; //Bad practice
    int *n= 0; //Good practice
    int *v= nullptr; //Good practice
    
    return 0;     
}  