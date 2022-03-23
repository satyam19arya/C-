// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//  map<int,int> m;
//  cout<<m.size()<<"\n";
//  cout<<m[15]<<"\n";     //instantly create the element and the value will be zero
//  m[10];
//  cout<<m.size()<<"\n";
// }


//Example 2:(very good for counting the frequency of element)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     map<int,int> freq;

//     freq[10]++;
//     freq[10]++;
//     freq[10]++;
//     freq[10]++;
//     freq[4]++;

//     cout<<freq[10]<<" "<<freq[4];
// }


//Question
#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> freq;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        string s;
        cin>>s;

        if(freq[s]==0){
            cout<<"OK\n";
        }
        else{
            cout<<s<<freq[s]<<"\n";
        }
        freq[s]++;
    }
}


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     // Map is an associative array
//  map<string,int> m;
//  m["Aman"]=55;
//  m["Satyam"]=80;
//  m["Rohan"]=70;
//  m["Anand"]=50;
//  m["Rajan"]=85;
//  m["Saatvik"]=65;

//  m.insert({{"Harsh",75},{"Akshat",70}});

//  map<string,int> :: iterator itr;
//  for(itr=m.begin();itr!=m.end();itr++){
//      cout<<(*itr).first<<" "<<(*itr).second<<endl;
//  }
//     return 0;
// }