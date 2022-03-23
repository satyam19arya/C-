#include <iostream>
using namespace std;

struct employee{
 int eId;
 char favChar;
 float salary;
};

int main(){
    struct employee satyam;
    satyam.eId= 1;
    satyam.favChar = 's';
    satyam.salary= 1200000;

    cout<<"The value is:"<<satyam.eId<<endl;
     cout<<"The value is:"<<satyam.favChar<<endl;
      cout<<"The value is:"<<satyam.salary<<endl;
    
return 0;
}