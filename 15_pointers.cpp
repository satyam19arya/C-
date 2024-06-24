// #include <iostream>
// using namespace std;

// void solve(int *p) {
//   // p = p + 1; (pass by value) (104 + 1 = 108)
//   *p = *p + 1; (pass by reference) (5 + 1 = 6)
// }

// int main() {
//   int a = 5;
//   int *ptr = &a;

//   cout << "Before" << endl;
//   cout << a << endl;
//   cout << ptr << endl;
//   cout << *ptr << endl;

//   solve(ptr);

//   cout << "After" << endl;
//   cout << a << endl;
//   cout << ptr << endl;
//   cout << *ptr << endl;

//   return 0;
// }


#include <iostream>
using namespace std;

void solve(int **ptr) {
  // ptr = ptr + 1; (pass by value) (216 + 1 = 220)
  // *ptr = *ptr + 1; *216 = *216 + 1 => *216  = 104 + 1 = 108
  **ptr = **ptr + 1; // 5 + 1 = 6
}

// address of x = 104
// address of p = 216
// address of q = 324

int main() {
  int x = 5;
  int *p = &x;
  int **q = &p;

  // *p = value present at address stored in p
  // **q = value present at address stored in *q
  // *q = value present at address stored in q

  cout << "Before" << endl;
  cout << x << endl;
  cout << &x << endl;
  cout << p << endl;
  cout << *p << endl;
  cout << &p << endl;
  cout << *q << endl;
  cout << q << endl;
  cout << &q << endl;
  cout << **q << endl;

  solve(q);

  cout << "After1" << endl;
  cout << x << endl;
  cout << &x << endl;
  cout << p << endl;
  cout << *p << endl;
  cout << &p << endl;
  cout << *q << endl;
  cout << q << endl;
  cout << &q << endl;
  cout << **q << endl;

  x = 10;
  cout << "After2" << endl;
  cout << x << endl;
  cout << &x << endl;
  cout << p << endl;
  cout << *p << endl;
  cout << &p << endl;
  cout << *q << endl;
  cout << q << endl;
  cout << &q << endl;
  cout << **q << endl;

  *p = 15;
  cout << "After3" << endl;
  cout << x << endl;
  cout << &x << endl;
  cout << p << endl;
  cout << *p << endl;
  cout << &p << endl;
  cout << *q << endl;
  cout << q << endl;
  cout << &q << endl;
  cout << **q << endl;

  **q = 20;
  cout << "After4" << endl;
  cout << x << endl;
  cout << &x << endl;
  cout << p << endl;
  cout << *p << endl;
  cout << &p << endl;
  cout << *q << endl;
  cout << q << endl;
  cout << &q << endl;
  cout << **q << endl;

  // *q = 25; // Error because q is a pointer to pointer and it can't be assigned a value directly

  return 0;
}