
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Reverse
{
    string s;

public:
    void getData()
    {
        cout << "Enter a sentence: ";
        getline(cin, s);
    }

    void reverseWords()
    {
        stringstream ss(s);
        string word;
        string words[100];
        int count = 0;

        while (ss >> word)
        {
            words[count] = word;
            count++;
        }

        cout << "Reversed sentence: ";

        for (int i = count - 1; i >= 0; i--)
        {
            cout << words[i] << " ";
        }
    }
};

int main()
{
    Reverse obj;

    obj.getData();
    obj.reverseWords();

    return 0;
}
