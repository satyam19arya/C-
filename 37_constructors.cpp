#include <iostream>
using namespace std;

class Rectangle{
  int length;
  int breadth;
  public:                // constructor can't have a return type
  Rectangle(){           //Default constructor
      length =1;
      breadth =1;
  }

  Rectangle(int l,int b){  //Parameterised constructor //With default values
      setLength(l);
      setBreadth(b);
  }

  Rectangle(Rectangle &r){  //Copy constructor
      length=r.length;
      breadth=r.breadth;
  }

  	void setLength(int l){
		if(l>=0)
        length=l;
        else
        length=0;
    }
	
	void setBreadth(int b){
		if(b>=0)
        breadth=b;
        else
        breadth=0;
	}
	
 	int getLength(){
	    return length;
	}
	        
	int getBreadth(){
		return breadth;
	}
	    
	int area(){
	 	return length*breadth;
	}
}; 

int main(){
    Rectangle r1,r2(10,5),r3(r2);

    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
    cout<<r3.area()<<endl;
    return 0;
}