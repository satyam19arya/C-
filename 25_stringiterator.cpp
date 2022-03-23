// #include <iostream>
// using namespace std;
// int main(){
//     string str="Hello";
//     string::iterator i;
//     for(i=str.begin(); i!=str.end();i++){
//         cout<<*i;
//     }
//     cout<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     string str="Hello";
//     string::iterator i;
//     for(i=str.begin(); i!=str.end();i++){
//         *i=*i-32;
//     }
//     cout<<str;
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    string str="Hello";
    string::reverse_iterator i;
    for(i=str.rbegin(); i!=str.rend();i++){
        cout<<*i;
    }
    cout<<endl;
    return 0;
}