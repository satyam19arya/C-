#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[20] = "234";
    char s2[20] = "443.6";
    char s3[20] = "x=10;y=20;z=35";

    // Convert string to long integer using strtol
    long int x = strtol(s1, NULL, 10); // Convert s1 to a long integer in base 10

    // Convert string to floating-point number using strtof
    float y = strtof(s2, NULL); // Convert s2 to a float

    // Print the converted values
    cout << x << " " << y << endl;

    // Parse string using strtok
    char *token = strtok(s3, "=;"); // Get the first token
    while (token != NULL) {
        cout << token << endl; // Print the token
        token = strtok(NULL, "=;"); // Get the next token
    }

    return 0;
}

// Tokenising a string using strtok