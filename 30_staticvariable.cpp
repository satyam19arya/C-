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


// Example 2 
#include <iostream>
using namespace std;

class abc{
    public:
    static int x, y;
    
    void print(){
        cout << x << " " << y << endl;
    }
    
    // This will show error because static member function can access only static data members of a class
    // int x, y;
    // static void print(){
    //    cout<<x<<" "<<y<<endl;
    // }
};

int abc::x;
int abc::y;

int main(){
    abc obj1;
    obj1.x = 1;
    obj1.y = 2;
    obj1.print();
    abc obj2;
    obj2.x = 10;
    obj2.y = 20;
    obj1.print();
    obj2.print();
    
    return 0;
}