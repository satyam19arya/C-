#include <iostream>
#include <iterator>
#include <set>
using namespace std;

int main(){
	set<int> s1;
	s1.insert(40);
	s1.insert(30);
	s1.insert(60);
	s1.insert(50);
	s1.insert(50);  //only one 50 will print
	s1.insert(50);
	s1.insert(10);

	set<int>::iterator itr;
	for(itr=s1.begin();itr!=s1.end();itr++){
		cout<<*itr<<" ";
	}
	cout<<endl;

	// assigning the elements from s1 to s2
	set<int> s2(s1.begin(),s1.end());
	for(itr=s2.begin();itr!=s2.end();itr++){
		cout<<*itr<<" ";
	}
	cout<<endl;

	// remove all elements up to 30 in s2
	s2.erase(s2.begin(),s2.find(30));
	for(itr=s2.begin();itr!=s2.end();itr++) {
		cout<<*itr<<" ";
	}
    cout<<endl;

	// remove element with value 50 in s2
	int num;
	num=s2.erase(50);
	cout<<num<<" removed\n";
	for(itr=s2.begin();itr!=s2.end();itr++) {
		cout<<*itr<<" ";
	}
	cout<<endl;

	// lower bound and upper bound for set s1
	cout<<*s1.lower_bound(40)<<endl;
	cout<<*s1.upper_bound(40)<<endl;
	return 0;
}