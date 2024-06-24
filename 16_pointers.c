// #include <stdio.h>

// int main() {
//   int *iptr;
//   char *cptr;
//   int num = 60;
//   char ch = 'A';
//   iptr = &num;
//   cptr = &ch;
//   printf("*iptr = %d num = %d", *iptr, num);
//   printf("\n*cptr = %c ch = %c", *cptr, ch);

//   return 0;
// }


// Example 2:
// #include <stdio.h>

// int main() {
//   char *cptr;
//   int num = 10; // 00000000 00000000 00000000 00001010
//   cptr = &num;
//   printf("Num = %d *cptr = %d", num, *cptr);
//   // while dereferencing it will only derefer first byte of memorys
//   int val = 258; // 00000000 00000000 00000001 00000010
//   cptr = &val;
//   printf("\nval = %d *cptr = %d", val, *cptr); // 2 (only first byte of memory is dereferenced = 00000010 = 2)

//   return 0;
// }
// Whenever we declare char* pointer, it will only dereference one byte of memory.
// So, if we assign an integer to a char* pointer, it will only dereference the first byte of memory.
// Whenever we declare int* pointer, it will dereference 4 bytes of memory.
// So, if we assign an integer to an int* pointer, it will dereference all 4 bytes of memory.
// char* : scale factor = 1 byte
// int* : scale factor = 4 bytes


// Example 3: (void pointer)
// #include <stdio.h>

// int main() {
//   int num = 20;
//   char ch = 'A';

//   void *vptr = NULL; // void pointer (Initally void pointer is unaware of scale factor)
//   // void *vptr; // generic pointer
//   vptr = &num;
//   printf("\n&num = %u vptr = %u", &num, vptr);
//   printf("\nNum = %d *vptr = %d", num, *(int *)vptr); // typecasting void pointer to int pointer

//   vptr = &ch;
//   printf("\n&ch = %u vptr = %u ", &ch, vptr);
//   printf("\nch = %c *vptr = %c \n", ch, *(char *)vptr); // typecasting void pointer to char pointer

//   return 0;
// }

// void pointer is a generic pointer that can point to any data type.
// void pointer cannot be dereferenced directly.
// We need to typecast void pointer to the appropriate data type before dereferencing it.


// Example 4: (Dangling pointer)
// #include <iostream>
// using namespace std;

// int main() {
//   int *ptr = new int;
//   *ptr = 10;
//   cout << *ptr << endl;
//   delete ptr;
//   cout << *ptr << endl; // Dangling pointer (pointer pointing to a memory location that has been deallocated)

//   return 0;
// }

// Dangling pointer is a pointer that points to a memory location that has been deallocated or freed. When you dereference a dangling pointer, it may cause a runtime error or unexpected behavior.
// To avoid dangling pointers, always set the pointer to NULL after deallocating the memory.
// In this code, we allocate a new integer on the heap and assign a value to it. We then delete the pointer ptr. After deleting the pointer, we try to dereference it, which causes a dangling pointer issue.
// To avoid this issue, always set the pointer to NULL after deleting it or use smart pointers like unique_ptr or shared_ptr or weak_ptr.
// Another way to avoid dangling pointers is to use references instead of pointers whenever possible. References are similar to pointers but do not require explicit memory management.


// Example 5: (Wild pointer)
// #include <iostream>
// using namespace std;

// int main() {
//   Case 1:
//   int *ptr;
//   cout << *ptr << endl; // Wild pointer (pointer is declared but not initialized)

//   Case 2:
//   int *ptr = &a; // a is not declared
//   cout << *ptr << endl; // Wild pointer (pointer is pointing to an undeclared variable)

//   Case 3:
//   int *ptr = new int;
//   cout << *ptr << endl; // Wild pointer (pointer is pointing to uninitialized memory)

//   return 0;
// }

// Wild pointer is a pointer that has not been initialized or assigned a valid memory address. When you dereference a wild pointer, it may cause a runtime error or unexpected behavior.
// To avoid wild pointers, always initialize the pointer to NULL or a valid memory address before using it.
// In this code, we have three cases of wild pointers:
// Case 1: The pointer ptr is declared but not initialized. When we try to dereference it, it causes a wild pointer issue.
// Case 2: The pointer ptr is assigned the address of an undeclared variable a. When we try to dereference it, it causes a wild pointer issue.
// Case 3: The pointer ptr is allocated memory using new but not initialized. When we try to dereference it, it causes a wild pointer issue.


// Example 6:
#include <stdio.h>

int main() {
  int num = 10;
  num++;
  printf("\nNum = %d", num);
  int *ptr = &num;
  printf("\nNum = %d *ptr = %d", num, *ptr);
  printf("\n&Num = %u ptr = %u", &num, ptr);

  ++*ptr; // (increment value by one)
  printf("\nNum = %d *ptr = %d", num, *ptr);

  *++ptr; // (increment address by one) ++ptr
  printf("\nNum = %d *ptr = %d", num, *ptr);
  printf("\n&Num = %u ptr = %u", &num, ptr);

  return 0;
}


// Example 7:
#include <stdio.h>

int main() {
  int num = 10;
  int *ptr = &num;

  printf("&num = %u ptr = %u", &num, ptr);
  ptr++; // ptr = ptr + 1
  printf("\n&num = %u ptr = %u", &num, ptr);

  return 0;
}


// Example 8:
#include <stdio.h>

int main() {
  int num = 10;
  int *ptr = &num;

  printf("&num = %u ptr = %u", &num, ptr);
  printf("\n&num = %d *ptr = %d", num, *ptr);
  // *ptr++; // address + 1 (right to left associativity)
  (*ptr)++; // value is incremented (left to right associativity)
  printf("\n&num = %u ptr = %u", &num, ptr);
  printf("\n&num = %d *ptr = %d", num, *ptr);

  num = 500;
  printf("\n&num = %d *ptr = %d", num, *ptr);
  *ptr = 300;
  printf("\n&num = %d *ptr = %d", num, *ptr);

  *ptr += 1;
  printf("\n&num = %d *ptr = %d", num, *ptr);

  *ptr *= 5;
  printf("\n&num = %d *ptr = %d", num, *ptr);
  
  return 0;
}

// *++ptr : increment address by one in the pointer and then dereference it.
// ++*ptr : increment value by one in the memory location pointed by the pointer.
// ptr++ : increment address by one in the pointer.
// *ptr++ : similar to ptr + 1 (increment address by one in the pointer).
// (*ptr)++ : increment value by one in the memory location pointed by the pointer.
// *ptr += 1 : increment value by one in the memory location pointed by the pointer.


// Example 9: (Function returning pointer)
#include <stdio.h>

int *solve() {
    int a = 25;
    int *ptr = &a;
    printf("\n%u", ptr);
    printf("\n%d", *ptr);
    return ptr;
}

int main() {
    int *ptr = solve();
    printf("\n%u", ptr);
    return 0;
}