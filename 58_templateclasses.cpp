#include<iostream>
using namespace std;

template<class T>
class Stack {
private:
    T *stk;   // Array to store elements of type T
    int top;
    int size;

public:
    Stack(int sz) {
        size = sz;
        top = -1;      // Initialize top to -1 to indicate an empty stack
        stk = new T[size]; // Dynamically allocate memory for the stack array
        // this->stk = new int[this->size]
        // this->stk = new char[this->size]
    }

    void push(T x) {
        if (top == size - 1)
            cout << "Stack is Full" << endl;
        else {
            top++;
            stk[top] = x;
        }
    }

    T pop() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
            return 0;
        } else {
            T x = stk[top];
            top--;
            return x;
        }
    }
};

int main() {
    Stack<int> s(10);

    s.push(10);
    s.push(23);
    s.push(33);

    int popped1 = s.pop();
    int popped2 = s.pop();
    int popped3 = s.pop();

    cout << "Popped elements: " << popped1 << ", " << popped2 << ", " << popped3 << endl;

    return 0;
}


// Example 2:
#include<iostream>
using namespace std;

template <class T>
class Array {
    private:
        int size;
        T *arr;
    public:
        // Default constructor
        Array() : size(0), arr(NULL) {}

        // Parameterized constructor
        Array(int size)
        {
            this->size = size;
            this->arr = new T[this->size];
        }

        void acceptRecord() {
            int i;
            cout << "\nEnter Array Elements: ";
            for(i = 0; i < this->size; i++)
                cin >> arr[i];
        }

        void printRecord() {
            int i;
            cout << "Array Elements are : ";
            for(i = 0; i < this->size; i++)
                cout << arr[i] << " ";
        }

        ~Array() {
            cout << "\nDestructor called " << endl;
            delete[] arr;
        }
};

int main(void) {
    Array<char> a1(5); // Creating a character array of size 5
    a1.acceptRecord();
    a1.printRecord();

    Array<int> a2(5); // Creating an integer array of size 4
    a2.acceptRecord();
    a2.printRecord();

    return 0;
}