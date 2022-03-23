#include <iostream>
using namespace std;

union money{
 int rice;
 char car;
 float salary;
};

int main(){
    union money satyam;
    satyam.rice= 1;
    // satyam.car = 's';
    // satyam.salary= 1200000;

    cout<<"The value is:"<<satyam.rice<<endl;
    //  cout<<"The value is:"<<satyam.car<<endl;
    //   cout<<"The value is:"<<satyam.salary<<endl;
    
return 0;
}


//Union is a user-defined datatype.
//All the members of union share same memory location. 
//Size of union is decided by the size of largest member of union. 
//If you want to use same memory location for two or more members, union is the best for that.
