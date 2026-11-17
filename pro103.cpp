#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ofstream out("marks.csv");
    out << "Asha,91\nRavi,78\nMeera,88\n"; // CSV-like records
    out.close();

    ifstream in("marks.csv");
    if (!in) { 
        cerr << "open failed\n"; 
        return 1; 
    }

    string line;
    while (getline(in, line)) { // one record per line
        stringstream ss(line); // treat the line as a stream
        string name, marks;
        
        getline(ss, name, ',');  // Fixed: use single quotes for char delimiter
        getline(ss, marks);      // Fixed: no delimiter needed for the last item on the line
        
        cout << name << " => " << marks << endl;
    }

    return 0;
}
