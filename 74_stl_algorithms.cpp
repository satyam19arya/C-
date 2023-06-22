#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(3);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<count(v.begin(),v.end(),6)<<endl;
    auto m=lower_bound(v.begin(),v.end(),3);
    cout<<m-v.begin()<<endl;

    int a=7;
    int b=9;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<endl;
    

    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd<<endl;
    return 0;
}