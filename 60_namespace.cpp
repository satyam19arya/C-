#include <iostream>
using namespace std;

namespace First {
    void fun() {
        cout << "First";
    }
}

namespace Second {
    void fun() {
        cout << "Second";
    }
}

int main() {
    Second::fun();  // Calls the fun() function from the Second namespace
    return 0;
}

// Example 2: Nested namespace
#include <iostream>
using namespace std;

namespace NA {
    int num1 = 10;
    namespace NB {
        int num2 = 20;
        namespace NC {
            int num3 = 30;
        }
    }
}

int main() {
    cout << NA::num1 << endl;
    cout << NA::NB::num2 << endl;
    cout << NA::NB::NC::num3 << endl;
    return 0;
}

// Example 3: Using namespace alias
#include <iostream>
using namespace std;

namespace na {
    int num1 = 10;
}

namespace nb {
    int num1 = 20;
}

int main() {
    using namespace na;
    cout << num1 << endl;
    return 0;
}