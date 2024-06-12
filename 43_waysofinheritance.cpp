#include <iostream>
using namespace std;

class Parent {
private:
    int a;
protected:
    int b;
public:
    int c;

    void funParent() {
        a = 10;
        b = 5;
        c = 15;
    }
};

class Child : public Parent {
public:
    void funChild() {
        // a = 5;  // Error: 'a' is private in Parent
        b = 15;   // OK: 'b' is accessible due to protected inheritance
        c = 20;   // OK: 'c' is accessible due to public inheritance
    }
};

class GrandChild : public Child {
public:
    void funGrandChild() {
        // a = 5;  // Error: 'a' is private in Parent
        b = 15;   // OK: 'b' is accessible due to protected inheritance
        c = 20;   // OK: 'c' is accessible due to public inheritance
    }
};

int main() {
    Child d;

    // d.a = 5;  // Error: 'a' is private in Parent
    // d.b = 15; // Error: 'b' is protected in Parent
    d.c = 20;    // OK: 'c' is public in Parent and accessible in Child

    return 0;
}


// Example 2
// #include <iostream>
// using namespace std;

// class Parent {
// private:
//     int a;
// protected:
//     int b;
// public:
//     int c;

//     void funParent() {
//         a = 10;
//         b = 5;
//         c = 15;
//     }
// };

// class Child : protected Parent {
// public:
//     // In this case, all members of Parent become protected in Child,
//     // including both b and c.
// protected:
//     void funChild() {
//         // a = 5; // Error: 'a' is private in Parent
//         b = 15;  // OK: 'b' is accessible due to protected inheritance
//         c = 20;  // OK: 'c' is accessible due to protected inheritance
//     }
// };

// class GrandChild : public Child {
// public: 
//     void funGrandChild() {
//         // a = 5; // Error: 'a' is private in Parent
//         b = 15;  // OK: 'b' is accessible due to protected inheritance
//         c = 20;  // OK: 'c' is accessible due to protected inheritance
//     }
// };

// int main() {
//     Child d;
//     // d.a=5;  // Error: 'a' is private in Parent
//     // d.b=15; // Error: 'b' is protected in Child
//     // d.c=20; // Error: 'c' is protected in Child
//     return 0;
// }


// Example 3
// #include <iostream>
// using namespace std;

// class Parent {
// private:
//     int a;
// protected:
//     int b;
// public:
//     int c;

//     void funParent() {
//         a = 10;
//         b = 5;
//         c = 15;
//     }
// };

// class Child : private Parent {
// private:
//     // In this case, all members of Parent become private in Child,
//     // including both b and c.
// public:
//     // Members declared here will have private access specifier
// protected:
//     void funChild() {
//         // a = 5; // Error: 'a' is private in Parent
//         b = 15;  // OK: 'b' is accessible due to private inheritance
//         c = 20;  // OK: 'c' is accessible due to private inheritance
//     }
// };

// class GrandChild : public Child {
// public: 
//     void funGrandChild() {
//         // a = 5; // Error: 'a' is private in Parent
//         // b = 15; // Error: 'b' is private in Child
//         // c = 20; // Error: 'c' is private in Child
//     }
// };

// int main() {
//     Child d;
//     // d.a=5; // Error: 'a' is private in Parent
//     // d.b=15; // Error: 'b' is private in Child
//     // d.c=20; // Error: 'c' is private in Child
//     return 0;
// }