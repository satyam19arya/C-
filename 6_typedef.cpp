#include <iostream>
using namespace std;

typedef struct employee{
 int eId;
 char favChar;
 float salary;
}ep;

int main(){
     ep satyam;
    satyam.eId= 1;
    satyam.favChar = 's';
    satyam.salary= 1200000;

    cout<<"The value is:"<<satyam.eId<<endl;
     cout<<"The value is:"<<satyam.favChar<<endl;
      cout<<"The value is:"<<satyam.salary<<endl;
    
return 0;
}


//typedef vs #define
//typedef is limited to giving symbolic names to types only whereas
//#define can be used to define alias for values as well.

//typedef interpretation is performed by the compiler whereas 
//#define statements are processed by the pre-processor.