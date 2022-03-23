//auto
// #include <iostream>
// using namespace std;
// int main(){
//     double d=12.3;
//     int i=9;
//     auto x=2*d+i;
//     cout<<x<<endl;
//     return 0;
// }



//final keyword
// #include <iostream>
// using namespace std;
// class Parent final   //it resistricts inheritance
// {

// };
// class Child:Parent{

// };
// int main(){
//     return 0;
// }



// #include <iostream>
// using namespace std;
// class Parent{
//     public:
//   virtual void show() final  //it also resistricts overriding of function
//   {

//   }
// };
// class Child:public Parent{
//     public:
//   void show(){

//   }
// };
// int main(){
//     return 0;
// }



//Lambda Expressions
//Example 1:
// #include <iostream>
// using namespace std;
// int main(){
//     [](){
//         cout<<"Hello";
//     }();
//     return 0;
// }

//Example 2:
// #include <iostream>
// using namespace std;
// int main(){
//     [](int x,int y){
//         cout<<x+y<<endl;
//     }(10,20);
//     return 0;
// }

//Example 3:
// #include <iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int b=10;
//     [a,b](){
//         cout<<a+b<<endl;   //we cannot modify the value(++a),to modify use &a,&b
//     }();
//     return 0;
// }


//Example 4:
// #include <iostream>
// using namespace std;
// int main(){
//     int a=5;
//     auto f=[a](){
//         cout<<a<<endl;   
//     };
//     f();
//     f();
//     return 0;
// }

//Example 5:
// #include <iostream>
// using namespace std;
// int main(){
//     int a=5;
//     auto f=[a](){        //we cannot modify the value(++a),to modify use &a,&b
//         cout<<a<<endl;   
//     };
//     f();
//     a++;
//     f();
//     return 0;
// }



//Ellipsis
// #include <iostream>
// #include <cstdarg>
// using namespace std;
// int sum(int n,...){
//   va_list list;      //for creating a list type of objects
//   va_start(list,n);  //function for getting all these variable arguments inside a variable list
//   int x;
//   int s=0;
//   for(int i=0;i<n;i++){
//     x= va_arg(list,int);
//     s+=x;
//   }
//     return s;
// }

// int main(){
//     cout<<sum(3,10,20,30)<<endl;
// 	cout<<sum(5,1,2,3,4,5)<<endl;
//     return 0;
// }