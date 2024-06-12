#include <iostream>
using namespace std;

class abc{
    public:
    int x;
    int *y;
    
    abc(int _x, int _y){
        x = _x;
        y = new int(_y);
    }

    // default dumb copy constructor -> it does shallow copy
    abc(const abc &obj){
        x = obj.x;
        y = obj.y;    
    }

    // deep copy
    // abc(const abc &obj){
    //     x = obj.x;
    //     y = new int(*obj.y);    
    // }
    
    int print() const{
        printf("X: %d\nptr Y: %d\n*Y: %d\n",x,y,*y);
    }
};

int main(){
    abc a(1, 2);
    cout<<"Printing a: "<<endl;
    a.print();

    abc b(a);  // Copy constructor
    cout<<"Printing b: "<<endl;
    b.print();

    *b.y = 3;
    cout<<"Printing b: "<<endl;
    b.print();

    cout<<"Printing a: "<<endl;
    a.print();

    // We see can on changing the value of b, the value of a also changes but we want b as a independent object.
    // Printing b: 
    // X: 1
    // ptr Y: 18161040
    // *Y: 3
    // Printing a: 
    // X: 1
    // ptr Y: 18161040
    // *Y: 3
    
    return 0;
}