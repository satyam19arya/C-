#include <iostream>
using namespace std;

int main() {
    int a = 11, b = 7, c;
    c = a & b; // Bitwise AND
    cout << c << endl;
        
    int d = 11, e = 7, f;
    f = d | e; // Bitwise OR
    cout << f << endl;
        
    int g = 11, h = 7, i;
    i = g ^ h; // Bitwise XOR
    cout << i << endl;
        
    char j = 5, k;
    k = j << 1; // Left shift
    cout << (int)k << endl;
        
    char l = 20, m;
    m = l >> 1; // Right shift
    cout << (int)m << endl;
        
    char x = 5, y;
    y = ~x; // Bitwise NOT
    cout << (int)y << endl;
        
    return 0;     
}