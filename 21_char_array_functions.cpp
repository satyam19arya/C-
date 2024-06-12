#include <iostream>
#include <cstring>
using namespace std;

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