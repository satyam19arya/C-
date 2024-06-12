#include <iostream>
using namespace std;

void solve(int *p){
    // p = p+1;       
    *p = *p+1;
}

int main(){
    int a = 5;
    int *ptr = &a;
    
    cout<<"Before"<<endl;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
  
    solve(ptr);
    
    cout<<"After"<<endl;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    
    return 0;
}

// #include <iostream>
// using namespace std;

// void solve(int **ptr){
//     // ptr = ptr+1;         
//     // *ptr = *ptr+1;
//     **ptr = **ptr+1;
// }

// int main(){
//     int x = 5;
//     int *p = &x;
//     int **q = &p;
    
//     cout<<"Before"<<endl;
//     cout<<x<<endl;
//     cout<<&x<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     cout<<&p<<endl;
//     cout<<*q<<endl;
//     cout<<q<<endl;
//     cout<<&q<<endl;
  
//     solve(q);
    
//     cout<<"After"<<endl;
//     cout<<x<<endl;
//     cout<<&x<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     cout<<&p<<endl;
//     cout<<*q<<endl;
//     cout<<q<<endl;
//     cout<<&q<<endl;
    
//     return 0;
// }