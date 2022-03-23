// #include <iostream>
// #include <fstream>
// using namespace std;
// int main(){
//     ofstream ofs("My.Text",ios::trunc);
// 	ofs<<"john"<<endl;
// 	ofs<<25<<endl;
// 	ofs<<"cs"<<endl;
// 	ofs.close();
//     return 0;
// }



#include<iostream>
#include<fstream>
using namespace std;
     
int main(){
	ifstream ifs;
	ifs.open("My.txt");
	
	cout<<"file is opened"<<endl;
	string name;
	int roll;
	string branch;
	ifs>>name>>roll>>branch;
	ifs.close();
	    
	cout<<"name"<<name<<endl;
	cout<<"roll"<<roll<<endl;
	cout<<"branch"<<branch<<endl;    
}