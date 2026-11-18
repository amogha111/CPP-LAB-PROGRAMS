
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> freq;
    string word;

    cout << "Enter words (type stop to finish):" << endl;

    while (cin >> word && word != "stop") {
        freq[word]++;
    }

    if (freq.empty()) {
        cout << "No words entered!";
        return 0;
    }

    cout << "\nWord Frequencies:" << endl;

    string mostFrequent;
    int maxCount = 0;

    for (auto item : freq) {
        cout << item.first << " : " << item.second << endl;

        if (item.second > maxCount) {
            maxCount = item.second;
            mostFrequent = item.first;
        }
    }

    cout << "\nMost frequent word: " << mostFrequent << endl;
    cout << "Frequency: " << maxCount << endl;

    return 0;
}
