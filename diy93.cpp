
#include <iostream>
#include <exception>
using namespace std;

// Custom Overflow Exception
class Overflow : public exception {
public:
    const char* what() const noexcept override {
        return "Stack Overflow!";
    }
};

// Custom Underflow Exception
class Underflow : public exception {
public:
    const char* what() const noexcept override {
        return "Stack Underflow!";
    }
};

// Stack Class
class Stack {
private:
    int *arr;
    int top;
    int size;

public:
    Stack(int s) {
        size = s;
        arr = new int[size];
        top = -1;
    }

    void push(int value) {
        if (top == size - 1) {
            throw Overflow();
        }

        arr[++top] = value;
        cout << value << " pushed into stack" << endl;
    }

    void pop() {
        if (top == -1) {
            throw Underflow();
        }

        cout << arr[top--] << " popped from stack" << endl;
    }

    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack s(2);

    // Testing Stack Overflow
    try {
        s.push(10);
        s.push(20);
        s.push(30);
    }
    catch (Overflow &e) {
        cout << "Error: " << e.what() << endl;
    }

    // Removing all elements
    try {
        s.pop();
        s.pop();
    }
    catch (Underflow &e) {
        cout << "Error: " << e.what() << endl;
    }

    // Testing Stack Underflow
    try {
        s.pop();
    }
    catch (Underflow &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
