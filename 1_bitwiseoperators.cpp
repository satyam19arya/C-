#include <iostream>
using namespace std;

int main() {
    int a = 11, b = 7, c;
    c = a & b; // Bitwise AND
    cout << c << endl;  // Output: 3
        
    int d = 11, e = 7, f;
    f = d | e; // Bitwise OR
    cout << f << endl;  // Output: 15
        
    int g = 11, h = 7, i;
    i = g ^ h; // Bitwise XOR
    cout << i << endl;  // Output: 12
        
    char j = 5, k;
    k = j << 1; // Left shift
    cout << (int)k << endl;  // Output: 10
        
    char l = 20, m;
    m = l >> 1; // Right shift
    cout << (int)m << endl;  // Output: 10
        
    char x = 5, y;
    y = ~x; // Bitwise NOT
    cout << (int)y << endl;  // Output: -6
        
    return 0;     
}