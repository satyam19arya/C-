//We can create a single function to work with different data types by using a template.
#include<iostream>
using namespace std;
    
template<class T>
T maxim(T a,T b)
    {
       return a>b?a:b;
    }
    
int main(){
	cout<<maxim(12,14)<<endl;
	cout<<maxim(2.3,1.4)<<endl;
	cout<<maxim(2.3f,5.6f)<<endl;
	
	return 0;  
} 

    //Example 2: with default arguments (default arguments always from right to left)

    // #include<iostream>
    // using namespace std;
    // template<class T>
    // T add(T x,T y,T z=0){
    //     T k;
    //     k=x+y+z;
    //     return k;
    // }
    // int main(){
    //     int a=add(2,3);
    //     float b= add(2.2f,3.3f);
    //     cout << a << "\n"<< b << endl;
    //     return 0;
    // }