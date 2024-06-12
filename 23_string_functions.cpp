#include <iostream>
using namespace std;

int main() {
    string str = "Hello";

    cout << "Length of the string: " << str.length() << endl;
    cout << "Size of the string: " << str.size() << endl;
    cout << "Capacity of the string: " << str.capacity() << endl;

    str.resize(25);
    cout << "New capacity of the string after resizing: " << str.capacity() << endl;

    cout << "Maximum size of the string: " << str.max_size() << endl;

    if (str.empty())
        cout << "String is empty!" << endl;
    else
        cout << "String is not empty: " << str << endl;

    // Append "World" to the string
    str.append("World");
    cout << "String after appending 'World': " << str << endl;

    // Insert "am" at index 3
    str.insert(3, "am");
    cout << "String after inserting 'am' at index 3: " << str << endl;

    // Replace characters starting from index 2 with "mm"
    str.replace(2, 4, "mm");
    cout << "String after replacing characters from index 2 with 'mm': " << str << endl;

    str.push_back('a');
    cout << "String after pushing 'a' to the end: " << str << endl;

    str.pop_back();
    cout << "String after popping the last character: " << str << endl;

    return 0;
}