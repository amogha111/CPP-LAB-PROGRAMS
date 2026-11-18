
#include <iostream>
#include <memory>
using namespace std;

class Array {
private:
    unique_ptr<int[]> arr;
    int size;

public:
    Array(int n) {
        size = n;
        arr = make_unique<int[]>(size);
    }

    void input() {
        cout << "Enter " << size << " elements:" << endl;

        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "Array elements: ";

        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size!";
        return 0;
    }

    Array a(n);

    a.input();
    a.display();

    return 0;
}
