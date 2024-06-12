// int maxim(int a, int b) {
//     return (a > b) ? a : b;
// }

// float maxim(float a, float b) {
//     return (a > b) ? a : b;
// }
    
// Example 1
#include<iostream>
using namespace std;

template<class T>
T maxim(T a, T b) {
    return a > b ? a : b;
}

int main() {
    cout << maxim(12, 14) << endl; // Calling maxim with int arguments
    cout << maxim(2.3, 1.4) << endl; // Calling maxim with float arguments
    cout << maxim(2.3f, 5.6f) << endl; // Calling maxim with float arguments
    return 0;
}

// Example 2
#include<iostream>
using namespace std;

template<class T>
T add(T x, T y, T z = 0) {
    T k;
    k = x + y + z;
    return k;
}

int main() {
    int a = add(2, 3); // Calling add with two int arguments
    float b = add(2.2f, 3.3f); // Calling add with two float arguments
    cout << a << "\n" << b << endl;
    return 0;
}