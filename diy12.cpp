
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Anagram
{
    string s1, s2;

public:
    void getData()
    {
        cout << "Enter first word: ";
        cin >> s1;

        cout << "Enter second word: ";
        cin >> s2;
    }

    void check()
    {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if (s1 == s2)
            cout << "The words are Anagrams.";
        else
            cout << "The words are not Anagrams.";
    }
};

int main()
{
    Anagram obj;

    obj.getData();
    obj.check();

    return 0;
}
