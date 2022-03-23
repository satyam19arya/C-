#include <iostream>
using namespace std;
int main(){
 string str="Hello";

cout<<str.length()<<endl;
cout<<str.size()<<endl;
cout<<str.capacity()<<endl;
str.resize(25);
cout<<str.capacity()<<endl;
cout<<str.max_size()<<endl;

if(str.empty()){
    cout<<"String is empty!"<<endl;
}
else{
    cout<<str<<endl;
}

str.append("World");
cout<<str<<endl;

str.insert(3,"am");
cout<<str<<endl;

str.replace(2,4,"mm");
cout<<str<<endl;

str.push_back('a');
cout<<str<<endl;

str.pop_back();
cout<<str<<endl;
    return 0;
}