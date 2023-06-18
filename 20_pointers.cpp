#include <iostream>
using namespace std;

int main(){
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

    //Pointers basics (Array)

    int arr[4] = {12, 14, 16, 18};
    
    cout<<arr<<endl;  //arr is a pointer to the first location of the array
    cout<<arr[0]<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr)+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;  // both are same 
    cout<<arr[2]<<endl;    // both are same (internally converted to *(arr+2))
    cout<<2[arr]<<endl;    //i[arr] == arr[i]  (internally *(arr+2) == *(2+arr))
    int i=0;
    cout<<arr[i]<<endl;
    cout<<&arr[i]<<endl;

    int *p = arr;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    cout<<*(p+2)<<endl;
    cout<<p[2]<<endl;
    p=p+2;
    cout<<p<<endl;
    // arr= arr+2;       //compilation error because arr is pointing to memory location of the first element of the array (base address) & you can't change the base address but we can use pointer arithmetic to access other elements of the array
    // cout<<arr<<endl;
    cout<<arr+2<<endl; //Here we are only printing not updating

    //dereference means uss address par jo value padi hai wo bata dho

    //Pointers (char array)
    // char ch[10] = "Satyam";
    // char *ptr = ch;   //char *ptr = &ch[0]
    // cout<<ch<<endl;
    // cout<<*ch<<endl;
    // cout<<&ch<<endl;
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*ptr<<endl;  //*ptr = *(ptr+0) = p[0]
    // cout<<ptr<<endl;
    // cout<<ptr+2<<endl;
    // cout<<ptr+3<<endl;
    
    // char c = 'S';  //now single character only  //char by single quotes and array of characters or strings by double quotes
    // char *pt= &c;
    // cout<<pt<<endl;
    
    //char *ch = "satyam"  //bad practice
    return 0;     
}