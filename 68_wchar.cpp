#include <iostream>
using namespace std;

int main() {
    wchar_t w = L'A';
    cout << "Wide character value: " << w << endl ;
    cout << "Size of the wide char is: " << sizeof(w) << endl;

    //  Wide character type array
    wchar_t warr[] = L"Hello";
    wcout << "Wide character array: " << warr << endl;
    wcout << "Size of the wide char array is: " << sizeof(warr) << endl;

    cout << "Enter the wide character: ";
    wchar_t wc;
    wcin >> wc; 
    wcout << "Entered wide character is: " << wc << endl;

    return 0;
}

// Wide character type is used to store wide characters like Chinese, Japanese, Korean, etc.