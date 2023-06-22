//1
// #include <bits/stdc++.h>
// using namespace std;

// void Display(list<int> &lst){
//    list<int> :: iterator itr;
//    for(itr = lst.begin(); itr!= lst.end();itr++){
//       cout<<*itr<<" ";
//    }
// }
// int main(){
//     list<int> list1;   ///empty list of 0 length

//     list1.push_back(5);
//     list1.push_back(7);
//     list1.push_back(1);
//     list1.push_back(9);
//     list1.push_back(12);

//     Display(list1);
//     return 0;
// }



//2
#include <bits/stdc++.h>
using namespace std;

void Display(list<int> &lst){
   list<int> :: iterator itr;
   for(itr = lst.begin(); itr!= lst.end();itr++){
      cout<<*itr<<" ";
   }
   cout<<endl;
}
int main(){
    list<int> list1;   ///empty list of 0 length

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    Display(list1);
    list1.pop_back();
    Display(list1);
    list1.remove(9);
    Display(list1);
    list1.push_back(15);
    list1.sort();
    Display(list1);
    list1.reverse();
    Display(list1);
    return 0;
}



//3
// #include <bits/stdc++.h>
// using namespace std;

// void Display(list<int> &lst){
//    list<int> :: iterator itr;
//    for(itr = lst.begin(); itr!= lst.end();itr++){
//       cout<<*itr<<" ";
//    }
// }
// int main(){
//     list<int> list1(3);   //empty list of length 3
//     list<int> :: iterator itr=list1.begin();
//     *itr=45;
//     itr++;
//     *itr=6;
//     itr++;
//     *itr=9;
//     itr++;

//     Display(list1);
//     return 0;
// }