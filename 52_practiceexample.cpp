#include <iostream>
using namespace std;

class Shape{
    public:
    virtual float area()=0;
    virtual float perimeter()=0;
};
class Rectangle:public Shape{
    private:
    float length;
    float breadth;
    public:
    Rectangle(float l=1,float b=1){
       length=l;
       breadth=b;
    }
    float area(){
        return length*breadth;
    }
    float perimeter(){
        return 2*(length+breadth);
    }
};
class Circle:public Shape{
    private:
    float radius;
    public:
    Circle(float r=0){
        radius=r;
    }
    float area(){
         return 3.1425*radius*radius;
    }
    float perimeter(){
         return 2*3.1425*radius;
    }
};

int main(){
    Rectangle r(10,5);
    Shape* ptr=&r;
    cout<<"Area"<<ptr->area()<<endl;
    cout<<"Perimeter"<<ptr->perimeter()<<endl;;

    Circle c(10);
    cout<<"Area"<<ptr->area()<<endl;
    cout<<"Perimeter"<<ptr->perimeter()<<endl;
    
    return 0;
}