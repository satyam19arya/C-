#include <iostream>
using namespace std;

class abc{
    // mutable int x;  // mutable keyword is used to modify the value of const variable
    int x;
    int *y;
    
    public:
    abc(){
        x = 0;
        y = new int[0];
    }
    
    abc(int _x, int _y){
        x = _x;
        y = new int(_y);
    }
    
    int getX() const{
        // x = 10;       //we can't modify the value of x;
        return x;
    }
    
    // int getY() {
    //     int a = 28;
    //     y = &a;       //we can modify the value of pointer y;
    //     return *y;
    // }
    
    int getY() const{
        // int a = 28;
        // y = &a;       //we can't modify the value of pointer y;
        return *y;
    }
    
    int setX(int _val){ 
        x = _val;
    }
    
    int setY(int _val){
        *y = _val;
    }
};

//Here we have taken const object (by reference) and uss object ke andar jo bhi function call karoge wo const function call honi chaheye 
void printabc(const abc &b){  
    cout<<b.getX()<<" "<<b.getY()<<endl;  //works because getY and getX are const function
    // a.setX(10);    not a const function call
}

int main(){
    abc a, b(2,3);
    cout<<a.getX()<<endl;
    cout<<a.getY()<<endl;
    printabc(b);
    
    return 0;
}