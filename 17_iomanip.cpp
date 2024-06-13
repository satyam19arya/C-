#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // int num = 10;

    // cout << "Num = " << num << "\n";

    // // Display the number in decimal format explicitly using setbase
    // cout << "Num = " << setbase(10) << num << "\n";

    // // Display the number in octal format using setbase
    // cout << "Num in octal format : " << setbase(8) << num << "\n";

    // // Display the number in hexadecimal format using setbase
    // cout << "Num in hexa decimal format : " << setbase(16) << num << "\n";
       
    // // Display the number in decimal format using dec manipulator
    // cout << "Num = " << dec << num << endl;

    // // Display the number in octal format using oct manipulator
    // cout << "Num in octal format : " << oct << num << endl;

    // // Display the number in hexadecimal format using hex manipulator
    // cout << "Num in hexa decimal format : " << hex << num << endl;

    int num1 = 50, num2 = 40000, num3 = 10;

    // Display the numbers in default format
    cout << num1 << " " << num2 << " " << num3 << endl;

    // Display the numbers with specified field width using setw
    cout << setw(8) << num1 << setw(8) << num2 << setw(8) << num3 << endl;

    // Display the numbers with specified field width using printf
    printf("%8d%8d%8d\n", num1, num2, num3);

    // Display num1 with specified field width and fill character using setw and setfill
    cout << setw(8) << setfill('#') << num1 << endl;

    // Display num2 with specified field width and fill character using setw and setfill
    cout << setw(10) << setfill('*') << num2 << endl;

    double d = 5.56789;
    cout << "Default : " << d << endl;
    cout << setprecision(3) << "Precision : " << d << endl;

    // Double quotes within a string literal
    cout << "\"Hello World\"" << endl;

    // Tab character (\t)
    cout << "Hello \t OM3 & OM5" << endl;

    // Backslash character (\)
    cout << "Day\\03" << endl;

    // Backspace character (\b)
    cout << "Hello Ama\bn" << endl;
    // Note: \b moves the cursor back one position, so '3' overwrites 'b'

    // Carriage return (\r)
    cout << "Good Evening\rhello" << endl;
    // Output: helloEvening
    // Explanation:
    // - \r moves the cursor to the beginning of the line, overwriting the existing contents.

    return 0;
}