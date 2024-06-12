#include <iostream>
using namespace std;

int max(int a, int b){
   if(a > b) return a;
   else return b;
}

int min(int a, int b){
   if(a < b) return a;
   else return b;
}

int main(){
    int (*p)(int, int);  // declaration
    p = max;             // initialization
    cout << (*p)(10, 5) << endl;  // function calling
    p = min;
    cout << (*p)(6, 7) << endl;

    return 0;
}