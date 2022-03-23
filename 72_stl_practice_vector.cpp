//1
// #include <bits/stdc++.h>
// using namespace std;

// void Display(vector<int> &vec){
//   for(int i=0;i<vec.size();i++){
//          cout<<vec[i]<<" ";
//   }
//   cout<<endl;
// }
// int main(){
//     vector<int> v;
//     int element,size;
//     cout<<"Enter the size of your vector"<<endl;
//     cin>>size;
//     for(int i=0;i<size;i++){
//        cin>>element;
//        v.push_back(element);
//     }

//     Display(v);
//     return 0;
// }



//2
// #include <bits/stdc++.h>
// using namespace std;

// void Display(vector<int> &vec){
//   for(int i=0;i<vec.size();i++){
//          cout<<vec[i]<<" ";
//   }
//   cout<<endl;
// }
// int main(){
//   vector<int> v;
//   int element,size;
//   cout<<"Enter the size of your vector"<<endl;
//   cin>>size;

//   for(int i=0;i<size;i++){
//     cin>>element;
//     v.push_back(element);
//   }
//   Display(v);
//   vector<int> :: iterator itr=v.begin();
//   v.insert(itr,566);
//   Display(v);

//   return 0;
// }



//3
// #include <bits/stdc++.h>
// using namespace std;

// void Display(vector<int> &vec){
//   for(int i=0;i<vec.size();i++){
//          cout<<vec[i]<<" ";
//   }
//   cout<<endl;
// }
// int main(){
//   vector<int> v;
//   int element,size;
//   cout<<"Enter the size of your vector"<<endl;
//   cin>>size;

//   for(int i=0;i<size;i++){
//     cin>>element;
//     v.push_back(element);
//   }
//   Display(v);
//   vector<int> :: iterator itr=v.begin();
//   v.insert(itr+1,566);
//   Display(v);

//   return 0;
// }



//4
// #include <bits/stdc++.h>
// using namespace std;

// void Display(vector<int> &vec){
//   for(int i=0;i<vec.size();i++){
//          cout<<vec[i]<<" ";
//   }
//   cout<<endl;
// }
// int main(){
//   vector<int> v;
//   int element,size;
//   cout<<"Enter the size of your vector"<<endl;
//   cin>>size;

//   for(int i=0;i<size;i++){
//     cin>>element;
//     v.push_back(element);
//   }
//   Display(v);
//   vector<int> :: iterator itr=v.begin();
//   v.insert(itr+1,10,566);
//   Display(v);

//   return 0;
// }



//5
#include <bits/stdc++.h>
using namespace std;

template <class T>
void Display(vector<T> &vec){
  for(int i=0;i<vec.size();i++){
         cout<<vec[i]<<" ";
  }
  cout<<endl;
}
int main(){
    vector<int> vec1;      //zero length integer vector
    vector<char> vec2(4);  //4-element character vector
    vec2.push_back('5');
    vector<char> vec3(vec2);//4-element character vector from vec2
    vector<int> vec4(6,3); //6-element vector of 3s

    // Display(vec1);
    // Display(vec2);
    // Display(vec3);
    // Display(vec4);

  int element,size;
  return 0;
}