
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("nums.txt");

    if (!fin) {
        cout << "File not found!";
        return 1;
    }

    int num, count = 0;
    int sum = 0, min, max;

    while (fin >> num) {
        if (count == 0) {
            min = max = num;
        }

        sum += num;

        if (num < min)
            min = num;

        if (num > max)
            max = num;

        count++;
    }

    fin.close();

    if (count == 0) {
        cout << "File is empty!";
    }
    else {
        cout << "Count = " << count << endl;
        cout << "Sum = " << sum << endl;
        cout << "Minimum = " << min << endl;
        cout << "Maximum = " << max << endl;
    }

    return 0;
}
