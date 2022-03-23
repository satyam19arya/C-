#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char s1[20]="234";
    char s2[20]="443.6";
    char s3[20]="x=10;y=20;z=35";

    long int x=strtol(s1,NULL,10);
    float y=strtof(s2,NULL);

    cout<<x<<" "<<y<<endl;

    char *token=strtok(s3,"=;");
    while(token!=NULL){
       cout<<token<<endl;
       token=strtok(NULL,"=;");
    }
    return 0;
}