// #include <iostream>
// using namespace std;
// int main(){
//     const int x=5;
//     //x++;  //value of x cannot be changed
//     cout<<x;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int x=5;
//     int *ptr=&x;
//     ++*ptr;
//     cout<<*ptr<<" "<<x;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     const int x=5;
//     const int *ptr=&x;
//     //++*ptr;  //cannot modify the value
//     cout<<*ptr<<" "<<x;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int x=5;
//     const int *ptr=&x;
//     //++*ptr;  //cannot modify the value
//     cout<<*ptr<<" "<<x;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int x=5;
//     int const *ptr=&x;
//     int y=20;
//     ptr=&y;
//     cout<<*ptr<<" "<<x;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int x=5;
//     int * const ptr=&x;
//     ++*ptr;
//     //int y=20;
//     //ptr=&y;  cannot assign ptr to some another value
//     cout<<*ptr<<" "<<x;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int x=5;
//     const int * const ptr=&x;
//     //++*ptr;  //cannot modify the value
//     //int y=20;
//     //ptr=&y;  cannot assign ptr to some another value
//     cout<<*ptr<<" "<<x;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// class Demo{
//     public:
//     int a=5;
//     int b=10;

//     void Display() const
//     {
//         //a++;   //cannot modify the value
//         cout<<a<<" "<<b<<endl;
//     }
// };
// int main(){
//     Demo d;
//     d.Display();
//     return 0;
// }



#include <iostream>
using namespace std;
int fun(const int &a, int &b){
    cout<<a<<" "<<b<<endl;
    //a++;
}
int main(){
    int x=10;
    int y=20;
    fun(x,y);
    cout<<"Main"<<x<<" "<<y<<endl;
    return 0;
}