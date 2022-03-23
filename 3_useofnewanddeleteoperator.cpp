#include <iostream>
#include <conio.h>
using namespace std;
int main(){
 int *arr;
 int size;

 cout<<"Enter the size of the integer array:";
 cin>>size;

 cout<<"Creating an array of size"<<size<<" ";

 arr=new int[size];

 cout<<"done";

 delete arr;
 getch();
}


//getch() method pauses the Output Console until a key is pressed. 
//It does not use any buffer to store the input character. ... 
//The entered character does not show up on the console.
// The getch() method can be used to accept hidden inputs like password, ATM pin numbers, etc.