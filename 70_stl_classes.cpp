//Example:1
// #include<iostream>
// #include<vector>
// using namespace std;
    
// int main(){
// 	vector<int> v={2,4,6,8,10};
// 	v.push_back(20);
// 	v.push_back(30);
// 	vector<int>::iterator itr;
// 	cout<<"Using Iterator"<<endl;
	    
// 	for(itr=v.begin();itr!=v.end();itr++)
// 		cout<<++*itr<<endl;
// 	    cout<<"Using For Each Loop"<<endl;
	        
// 	for(int x:v)
// 		cout<<x<<endl;    		    
// }
    


//Example:2
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	vector<int> v;
// 	v.push_back(5);
// 	v.push_back(6);
// 	v.push_back(3);
// 	cout<<v.size()<<"\n";    //3
// 	cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<"\n";

// 	v.pop_back();
// 	cout<<v.size()<<"\n";    //2

// 	v.push_back(0);
// 	cout<<v.size()<<"\n";    //3
// 	cout<<"\n";

// 	v.clear(); //reset to 0;
// }



//Example:3
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//   int a[4]={5,4,1,2};
//   sort(a,a+4);         //(point on first element,point on right of the last element)
//   for(int i=0;i<4;i++){
// 	  cout<<a[i]<<" ";
//   }
// }



//Example:4
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	vector<int> v={5,4,1,2};
// 	sort(v.begin(),v.end());
// 	for(int i=0;i<4;i++){
// 		cout<<v[i]<<" ";
// 	}
// }



//Example:5
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	pair<int,string> p={4,"satyam"};
// 	p.first=15;

// 	cout<<p.first<<" "<<p.second;
// }



//Example:6 -------------------------------
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	pair<int,int> p[5];  //an array of 5 pairs
//     p[0]={1,2}; p[1]={5,2}; p[2]={8,1}; p[3]={1,0}; p[4]={3,4};

// 	sort(p,p+5);

// 	for(int i=0;i<4;i++){
// 		cout<<p[i]<<" ";
// 		}
// 	}



//----------------------------------------
//Ques:Given a list of names and scores of students,
//print the names of students in decreasing order of scores.
// #include "bits/stdc++.h"
// using namespace std;
// int main(){
// 	vector<pair<int,string>> v;
// 	sort(v.begin(),v.end());
//  for(int i=0;i<v.size();i++){
// 	 cout<<v[i]<<" ";
//  }
// }	
	



//Example:7 (Set)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	set<int> s;
// 	s.insert(10);
// 	s.insert(15);

// 	cout<<s.count(10)<<"\n";
// 	cout<<s.count(9)<<"\n";
// 	cout<<s.count(11)<<"\n";
// 	cout<<s.count(15)<<"\n";

// 	s.erase(10);
// 	cout<<s.count(10)<<"\n";
// }




//Example:8 (set always keeps the element in sorted order)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	set<int> s;
// 	s.insert(4);
// 	s.insert(1);
// 	s.insert(10);
// 	s.insert(3);

// 	cout<<*s.begin();  //points to smallest element 
// }