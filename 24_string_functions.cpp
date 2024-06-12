#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";

    // Copy the string to a character array
    char str[10];
    s.copy(str, s.length());
    cout << str << endl;

    // Find the position of "o" in the string
    cout << s.find("o") << endl;
    // Find the last occurrence of "o" in the string
    cout << s.rfind("o") << endl;

    // Find the position of the first occurrence of "l" in the string
    cout << s.find_first_of("l") << endl;
    // Find the position of the first occurrence of "l" after index 3 in the string
    cout << s.find_first_of("l", 3) << endl;
    // Find the position of the last occurrence of "l" in the string
    cout << s.find_last_of("l") << endl;

    // Extract a substring starting from index 1
    cout << s.substr(1) << endl;
    // Extract a substring starting from index 1 and of length 3
    cout << s.substr(1, 3) << endl;

    // Access the character at index 2 using the at function
    cout << s.at(2) << endl;
    // Access the character at index 2 using array indexing
    cout << s[2] << endl;

    cout << s.front() << endl;
    cout << s.back() << endl;

    return 0;
}