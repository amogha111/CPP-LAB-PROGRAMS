
#include <iostream>
using namespace std;

class Stack
{
    private:
        int *arr;
        int top;
        int size;

    public:
        // Constructor
        Stack(int s)
        {
            size = s;
            arr = new int[size];
            top = -1;
        }

        // Push operation
        void push(int value)
        {
            if (top == size - 1)
            {
                cout << "Stack Overflow!" << endl;
            }
            else
            {
                arr[++top] = value;
                cout << value << " pushed" << endl;
            }
        }

        // Pop operation
        void pop()
        {
            if (top == -1)
            {
                cout << "Stack Underflow!" << endl;
            }
            else
            {
                cout << arr[top--] << " popped" << endl;
            }
        }

        // Display stack
        void display()
        {
            cout << "Stack elements: ";

            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";

            cout << endl;
        }

        // Destructor
        ~Stack()
        {
            delete[] arr;
            cout << "Stack memory released!" << endl;
        }
};

int main()
{
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();

    s.display();

    return 0;
}
