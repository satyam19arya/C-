#include <iostream>
using namespace std;
int main(){
 string s="Hello";
 char str[10];
 s.copy(str,s.length());
 cout<<str<<endl;

cout<<s.find("o")<<endl;
cout<<s.rfind("o")<<endl;

cout<<s.find_first_of("l")<<endl;
cout<<s.find_first_of("l",3)<<endl;
cout<<s.find_last_of("l")<<endl;

cout<<s.substr(1)<<endl;
cout<<s.substr(1,3)<<endl;

cout<<s.at(2)<<endl;
cout<<s[2]<<endl;

cout<<s.front()<<endl;
cout<<s.back()<<endl;
 return 0;
}