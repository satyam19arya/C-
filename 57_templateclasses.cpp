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