
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("in.txt");
    ofstream fout("out.txt");

    if (!fin || !fout) {
        cout << "Error opening file!";
        return 1;
    }

    string line;
    int lineNumber = 1;

    while (getline(fin, line)) {
        fout << lineNumber << ". " << line << endl;
        lineNumber++;
    }

    fin.close();
    fout.close();

    cout << "File copied successfully!";

    return 0;
}
