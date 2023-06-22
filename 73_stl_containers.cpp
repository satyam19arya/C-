//Stack
// #include <iostream>
// #include <stack>
// using namespace std;
// int main(){
//     stack<int> stack;
//     stack.push(21);
//     stack.push(22);
//     stack.push(24);
//     stack.push(25);
//     stack.pop();
//     stack.pop();
 
//     while(!stack.empty()){
//         cout<< ' ' <<stack.top();
//         stack.pop();
//     }
// }


//Queue
// #include <iostream>
// #include <queue>
// using namespace std;

// void showq(queue<int> gq){
// 	queue<int> g = gq;
// 	while (!g.empty()){
// 		cout<<'\n'<<g.front();
// 		g.pop();
// 	}
// 	cout<<'\n';
// }

// int main(){
// 	queue<int> gquiz;
// 	gquiz.push(10);
// 	gquiz.push(20);
// 	gquiz.push(30);
// 	showq(gquiz);
//     gquiz.pop();
// 	showq(gquiz);

// 	cout<<"\ngquiz.size(): "<<gquiz.size();
// 	cout<<"\ngquiz.front(): "<<gquiz.front();
// 	cout<<"\ngquiz.back(): "<<gquiz.back();
// 	return 0;
// }


//Priority Queue  (max-heap)
// CPP Program to demonstrate Priority Queue
// #include <iostream>
// #include <queue>
// using namespace std;
// void showpq(priority_queue<int> gq){
// 	priority_queue<int> g = gq;
// 	while(!g.empty()){
// 		cout<<'\n'<<g.top();
// 		g.pop();
// 	}
// 	cout <<'\n';
// }

// int main(){
// 	priority_queue<int> gquiz;
// 	gquiz.push(10);
// 	gquiz.push(30);
// 	gquiz.push(20);
// 	gquiz.push(5);
// 	gquiz.push(1);
// 	showpq(gquiz);
// 	gquiz.pop();
// 	showpq(gquiz);
    
// 	return 0;
// }


//Priority Queue  (min-heap)
#include <iostream>
#include <queue>
using namespace std;

void showpq(priority_queue <int,vector<int>,greater<int>> gq){
	priority_queue <int,vector<int>,greater<int>> g = gq;
	while(!g.empty()){
		cout<<'\n'<<g.top();
		g.pop();
	}
	cout<<'\n';
}

int main(){
	priority_queue <int,vector<int>,greater<int>> gquiz;
	gquiz.push(10);
	gquiz.push(30);
	gquiz.push(20);
	gquiz.push(5);
	gquiz.push(1);
	showpq(gquiz);
	return 0;
}