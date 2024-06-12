#include <iostream>
using namespace std;

#define max(a,b) (a>b?a:b)
#define msg(x) #x
#define PI 3.1425

// Check if PI is not defined, and if not, define it as 3
#ifndef PI
   #define PI 3
#endif

int main(){
    cout << "PI: " << PI << endl;

    cout << "Maximum of 10 and 12: " << max(10, 12) << endl;

    cout << "Message: " << msg(hello) << endl;

    return 0;
}