#include<iostream>
using namespace std;
    
int main(){
    int size;
	cout<<"Enter Number of Elements";
	cin>>size;
	int *p=new int[size];  
	p=NULL;
    delete[] p;

    p=new int[40];
    return 0;
 	
}