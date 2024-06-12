#include<iostream>
using namespace std;

void fun() {
    static int s = 10;
    s++;
    cout << s << endl;
}

int main() {
    fun();
    fun();
}

// they are like global variables but scope limited to a function
// they are initialized only once
// they are not destroyed when the function ends
// they are not accessible from outside the function