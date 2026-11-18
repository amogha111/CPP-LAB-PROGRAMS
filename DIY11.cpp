
#include <iostream>
#include <string>
using namespace std;

class Counter
{
    string s;
    int vowels, consonants;

public:
    void getData()
    {
        cout << "Enter a sentence: ";
        getline(cin, s);
    }

    void count()
    {
        vowels = 0;
        consonants = 0;

        for (int i = 0; i < s.length(); i++)
        {
            char ch = tolower(s[i]);

            if (ch >= 'a' && ch <= 'z')
            {
                if (ch == 'a' || ch == 'e' || ch == 'i' ||
                    ch == 'o' || ch == 'u')
                    vowels++;
                else
                    consonants++;
            }
        }
    }

    void display()
    {
        cout << "Vowels = " << vowels << endl;
        cout << "Consonants = " << consonants << endl;
    }
};

int main()
{
    Counter obj;

    obj.getData();
    obj.count();
    obj.display();

    return 0;
}
