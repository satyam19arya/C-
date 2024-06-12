#include <iostream>
using namespace std;

int division(int a,int b){
    if(b==0)
     throw 1.5;
     return a/b;

}
int main(){
    int x=10,y=0,z=0;
    try{
        z=division(x,y);
        cout<<z<<endl;
    }
    catch(double e){
        cout<<"Division by Zero"<<e<<endl;
    }
    cout<<"Bye!"<<endl;
    return 0;
}



// #include <iostream>
// using namespace std;

// int division(int a,int b){
//     if(b==0)
//      throw string("Hello");
//      return a/b;

// }
// int main(){
//     int x=10,y=0,z=0;
//     try{
//         z=division(x,y);
//         cout<<z<<endl;
//     }
//     catch(string e){
//         cout<<"Division by Zero"<<e<<endl;
//     }
//     cout<<"Bye!"<<endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;

// class MyException{

// };

// int main(){
//     int x=10,y=0,z=0;
//     try{
//         if(y==0)
//         throw MyException();
//         z=x/y;
//         cout<<z<<endl;
//     }
//     catch(MyException e){
//         cout<<"Division by Zero"<<endl;
//     }
//     cout<<"Bye!"<<endl;
//     return 0;
// }