#include <iostream>
using namespace std;

// void solve(int arr[]) { // pointer to the first element of the array
//   cout << "Size inside function: " << sizeof(arr) << endl; // 8 bytes (size of pointer)
// }

// void update(int *p) {
//   cout << "Address stored inside p: " << p << endl;
//   cout << "Address of p: " << &p << endl;
//   *p = *p + 10;
//   // *(104) = *(104) + 10
//   // *p = 5 + 10 = 15
// }

int main() {
  // Pointers basics
  int a = 5;
  int *ptr = &a;
  int *q = ptr; // q is also pointing to the same location where ptr is pointing
  cout << a << endl;
  cout << &a << endl;
  cout << ptr << endl;
  cout << *ptr << endl;
  cout << &ptr << endl;
  cout << sizeof(a) << endl;
  cout << sizeof(ptr) << endl;
  cout << *q << endl;

  a = a + 1;
  cout << a << endl;
  *ptr = *ptr + 1;
  cout << *ptr << endl;
  cout << a << endl;
  ptr = ptr + 2;
  cout << ptr << endl;

  int *m;           // Bad practice
  int *n = 0;       // Good practice
  int *v = nullptr; // Good practice

  cout << endl;
  cout << "Array : " << endl;
  // Pointers basics (Array)
  int arr[4] = {12, 14, 16, 18};

  cout << arr << endl; // arr is a pointer to the first location of the array (base address)
  cout << arr[0] << endl;
  cout << &arr << endl;
  cout << &arr[0] << endl;
  cout << *arr << endl;
  cout << *arr + 1 << endl; // *arr + 1 == arr[0] + 1
  cout << *(arr) + 1 << endl; // *(arr) + 1 == arr[0] + 1
  cout << *(arr + 1) << endl; // *(arr + 1) == arr[1]
  cout << *(arr + 2) << endl; // both are same
  cout << arr[2] << endl;  // both are same (internally converted to *(arr + 2))   (Formula: arr[i] == *(arr + i))
  cout << 2 [arr] << endl; // i[arr] == arr[i]  (internally *(arr + 2) == *(2 + arr))
  int i = 0;
  cout << arr[i] << endl;
  cout << &arr[i] << endl;

  int *p = arr;
  cout << p << endl;
  cout << &p << endl;
  cout << *p << endl;
  cout << *(p + 2) << endl;
  cout << p[2] << endl;
  p = p + 2;
  cout << p << endl;
  // arr = arr + 2;       // compilation error because we can't change the base address of the array (we can't change entry in the symbol table) but we can do p = p + 2 (p is a pointer variable) because we can change the value of the pointer variable
  cout << arr + 2 << endl; // Here we are only printing not updating

  // dereference means uss address par jo value padi hai wo bata dho

  cout << endl;
  cout << "Char Array : " << endl;
  // Pointers (char array)
//   char ch[10] = "Satyam";
//   char *ptr = ch; // char *ptr = &ch[0] or char *ptr = &ch
//   cout << ch << endl;
//   cout << *ch << endl;
//   cout << &ch << endl;
//   cout << ptr << endl;
//   cout << &ptr << endl;
//   cout << *ptr << endl;
//   cout << ptr << endl;  // ptr + 0 
//   cout << ptr + 2 << endl;
//   cout << ptr + 3 << endl;

  // char c = 'S';  // now single character only
  // char *pt= &c;
  // cout << pt << endl;  // it will print the character and the garbage value after that till it finds the null character

  // char *ch = "satyam"  // bad practice
  // char name[10] = "satyam";  // good practice
  // char *ptr = name;

  cout << endl;
  cout << "Functions : " << endl;
  // Pointers (Functions)
  //  int arr[10] = {1,2,3,4};
  //  cout << "Size inside main function: "<< sizeof(arr) << endl;
  //  solve(arr);   // Here the pointer name arr is passing to the function storing the address of arr and just because if we made change to the array in function, it will reflect in actual array in main so if Ex: arr[0] = 50; => *(arr + 0) that why it is called passed by reference
  // So, we can say that array is always passed by reference because it is always passed as a pointer

  // int a = 5;
  // int *ptr = &a;
  // cout << "Address of a: " << &a << endl;
  // cout << "Address stored inside ptr: " << ptr << endl;
  // cout << "Address of ptr: " << &ptr << endl;
  // update(ptr);        // int *p = ptr (copy of ptr)
  // cout << "Value of a: " << a << endl;

  return 0;
}


// int main() {
//   int arr[3] = {1, 2, 3};
//   printf("arr = %u &arr = %u &arr[0] = %u\n", arr, &arr, &arr[0]);
//   printf("arr + 1 = %u &arr + 1 = %u", arr + 1, &arr + 1);
//   printf("\n&arr + 2 = %u", &arr + 2);
//   return 0;
// }

// int main() {
//   int a[5] = {10, 20, 30, 40, 50};
//   printf("a[0] = %d *(a+0) = %d", a[0], *(a + 0));
//   printf("\n&a[0] = %u (a+0) = %u \n", &a[0], (a + 0));
//   return 0;
// }

// int main() {
//   int a[4] = {10, 20, 30, 40};
//   printf("%d %d", *a, *a + 1);
//   return 0;
// }

// int main() {
//   int a[5] = {10, 20, 30, 40, 50};
//   printf("%d", *a + 4);
//   printf("\n%d", *(a + 2) + 5);
//   printf("\n%d", *a + 3 + 4);
//   printf("\n%d", *(a + 1) + *(a + 3));

//   return 0;
// }

// int main() {
//   int a[3] = {10, 20, 30};
//   printf("%d %d %d %d", a[0], 0[a], *(a + 0), *(0 + a));
//   printf("\n%d %d %d %d", a[1], 1[a], *(a + 1), *(1 + a));

//   return 0;
// }