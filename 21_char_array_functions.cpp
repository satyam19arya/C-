#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char ch[] = "A"; // valid declaration
    // char ch[] = 'A'; // invalid initialziation 
    char ch[] = {'A'}; // valid initialization
    // char ch[] = {a}; // invalid
    //char ch[] = {"Sunbeam"}; // invalid
    char ch[] = {'S','u','n','b','e','a','m'}; // valid 
    return 0;
}


int main() {
    char s1[] = "sunbeam";
    char s2[] = "sunbeam";
    if(s1 == s2) printf("strings are same");
    else printf("strings are different");
    return 0;
}
// Output: strings are different


int main() {
    char *s1 = "sunbeam";
    char *s2 = "sunbeam";
    if(s1 == s2) printf("strings are same");
    else printf("strings are different");
    return 0;
}
// Output: strings are same


int main() {
    char *s1 = "sunb";
    char *s2 = "sunbeam";
    if(*s1 == *s2) printf("strings are same");
    else printf("strings are different");
    return 0;
}
// Output: strings are same because it compares the first character of both strings.

int main() {
    char s[20] = "Hello";
    cout << strlen(s) << endl;
    return 0;
}

//Method 2: 
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[20];
    cout << "Enter a string: ";
    cin.getline(s, 20);
    cout << strlen(s) << endl;
    return 0;
}

//Method 3: 
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char *s = new char[20]; // Dynamically allocate memory for a character array
    cout << "Enter a string: ";
    cin.getline(s, 20);
    cout << strlen(s) << endl;
    delete[] s; // Free the dynamically allocated memory
    return 0;
}

// String Concatenation
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[20] = "Hello";
    char s2[20] = "Aman";
    strcat(s1, s2);
    cout << s1 << endl;
    return 0;
}

// String Copy
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[20] = "Hello";
    char s2[20];
    strcpy(s2, s1);
    cout << s2 << endl;
    return 0;
}

// String Comparison
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[20] = "hello";
    char s2[20] = "Hello";
    cout << strcmp(s1, s2) << endl;
    return 0;
}

// String Search
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[20] = "Hello dddd";
    char s2[20] = "l"; // Initialize the substring to search for
    cout << strstr(s1, s2) << endl; // Find the substring in the source string and print the result
    return 0;
}


// String reverse
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[20] = "Hello";
    strrev(s);
    cout << s << endl;
    return 0;
}


int main() {
    char city1[20] = "pune";
    char city2[20] = {'k','a','r','a','d','\0'};
    char city3[] = "Mumbai";
    char city4[] = {'k','a','r','a','d'}; // invalid
    char city5[] = {'p','u','n','e','\0'};

    printf("\ncity1 = %s sizeof(city1) = %u", city1, sizeof(city1));
    printf("\ncity2 = %s sizeof(city2) = %u", city2, sizeof(city2));
    printf("\ncity3 = %s sizeof(city3) = %u", city3, sizeof(city3));  // 6 + 1 ('\0')
    printf("\ncity4 = %s sizeof(city4) = %u", city4, sizeof(city4));
    printf("\ncity5 = %s sizeof(city5) = %u", city5, sizeof(city5));

    return 0;
}