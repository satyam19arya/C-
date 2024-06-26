#include <iostream>
using namespace std;

union money {
    int rice;
    char car;
    float salary;
};

int main() {
    union money satyam;
    satyam.rice = 1;
    cout << "The value is: " << satyam.rice << endl;

    satyam.car = 's';
    cout << "The value is: " << satyam.car << endl;

    satyam.salary = 1200000;
    cout << "The value is: " << satyam.salary << endl;

    // Accessing previous values now would lead to undefined behavior
    // cout << "The value of rice is: " << satyam.rice << endl;
    // cout << "The value of car is: " << satyam.car << endl;

    return 0;
}

// Union is a user defined data type which is similar to structure.
// In union, all members share the same memory location.
// The size of union will be the size of the largest member.
// We can only access one member of union at a time.


#include <stdio.h>

struct {
  short int s[5]; // 2 bytes * (5 elements) = 10 bytes
  // 10 bytes
  // 8 bytes + 8 bytes (2 bytes, 6 bytes will slack bytes)

  union // 8 bytes
  {
    char x;
    float y;
    long z;
  } u;
  
} t;

int main() {
  printf("size of structure = %u\n", sizeof(t));
  printf("size of union = %u\n ", sizeof(t.u));
  return 0;
}

// size of structure = 24
// size of union = 8


// #include <stdio.h>

// union test {
//   int num;
//   char ch;
// } t;

// int main() {
//   t.num = 256;
//   printf("\nnum = %d", t.num);
//   t.ch = 'A';
//   printf("\nch = %c", t.ch);
//   printf("\nnum = %d", t.num); // undefined behaviour

//   return 0;
// }