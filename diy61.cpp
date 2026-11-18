
#include <iostream>
using namespace std;

class Money
{
    private:
        int rupees, paise;

    public:
        Money(int r = 0, int p = 0)
        {
            rupees = r + p / 100;
            paise = p % 100;
        }

        Money operator+(Money m)
        {
            Money temp;

            temp.rupees = rupees + m.rupees;
            temp.paise = paise + m.paise;

            if (temp.paise >= 100)
            {
                temp.rupees++;
                temp.paise -= 100;
            }

            return temp;
        }

        Money operator-(Money m)
        {
            Money temp;

            temp.rupees = rupees - m.rupees;
            temp.paise = paise - m.paise;

            if (temp.paise < 0)
            {
                temp.rupees--;
                temp.paise += 100;
            }

            return temp;
        }

        void display()
        {
            cout << "Rs. " << rupees << ".";

            if (paise < 10)
                cout << "0";

            cout << paise << endl;
        }
};

int main()
{
    Money m1(10, 80);
    Money m2(5, 50);

    Money m3, m4;

    m3 = m1 + m2;
    m4 = m1 - m2;

    cout << "First Money: ";
    m1.display();

    cout << "Second Money: ";
    m2.display();

    cout << "Addition: ";
    m3.display();

    cout << "Subtraction: ";
    m4.display();

    return 0;
}
