//This is the string length function.
//It returns the length of the string passed to it as the argument.
// #include <iostream>
// #include <string.h>
// using namespace std;
// int main(){
//     char s[20]="Hello";
//     cout<<strlen(s)<<endl;
//     return 0;
// }
//Method 2: 
// #include <iostream>
// #include <string.h>
// using namespace std;
// int main(){
//     char s[20];
//     cout<<"Enter a string: ";
//     cin.getline(s,20);
//     cout<<strlen(s)<<endl;
//     return 0;
// }
//Method 3: 
// #include <iostream>
// #include <string.h>
// using namespace std;
// int main(){
//     char *s=new char[20];
//     cout<<"Enter a string: ";
//     cin.getline(s,20);
//     cout<<strlen(s)<<endl;
//     return 0;
// }

//This is the string concatenate function. It concatenates strings.
// #include <iostream>
// #include <string.h>
// using namespace std;
// int main(){
//     char s1[20]="Hello";
//     char s2[20]="Aman";
//     strcat(s1,s2);
//     cout<<s1<<endl;
//     return 0;
// }

//This is the string copy function. It copies one string into another string.
// #include <iostream>
// #include <string.h>
// using namespace std;
// int main(){
//     char s1[20]="Hello";
//     char s2[20];
//     strcpy(s2,s1);
//     cout<<s2<<endl;
//     return 0;
// }

//This is the string compare function. It is used for string comparison.
// #include <iostream>
// #include <string.h>
// using namespace std;
// int main(){
//     char s1[20]="hello";
//     char s2[20]="Hello";
//     cout<<strcmp(s1,s2)<<endl;
//     return 0;
// }

//strstr (It is used to return substring from first match till the last character.)
// #include <iostream>
// #include <string.h>
// using namespace std;
// int main(){
//     char s1[20]="Hello dddd";
//     char s2[20]="l";
//     cout<<strstr(s1,s2)<<endl;
//     return 0;
// }