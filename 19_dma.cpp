#include<iostream>
using namespace std;
    
int main(){
    int size;
	cout<<"Enter Number of Elements: ";
	cin>>size;
	int *p=new int[size];  
    cout<<*p<<endl;
    p[0] = 12;
    p[1] = 13;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;

    delete[] p;
    p=NULL;
    return 0;
}

//we can't change the size of array once created