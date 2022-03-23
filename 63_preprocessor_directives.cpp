#include <iostream>
using namespace std;
#define max(a,b) (a>b?a:b)
#define msg(x) #x
#define PI 3.1425
#ifndef PI          //if not defined then
   #define PI 3
#endif

int main(){
    cout<<PI;
    cout<<max(10,12)<<endl;
	cout<<msg(hello)<<endl;
    return 0;
}

// Preprocessors are programs that process our source code before compilation.