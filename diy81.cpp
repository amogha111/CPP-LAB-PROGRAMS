
#include <iostream>
using namespace std;

class Account
{
    protected:
        float balance;

    public:
        Account(float b)
        {
            balance = b;
        }

        virtual float calculateInterest() = 0;

        virtual ~Account() {}
};

class Savings : public Account
{
    public:
        Savings(float b) : Account(b) {}

        float calculateInterest()
        {
            return balance * 0.05;
        }
};

class Current : public Account
{
    public:
        Current(float b) : Account(b) {}

        float calculateInterest()
        {
            return balance * 0.03;
        }
};

int main()
{
    Account *a[2];

    a[0] = new Savings(10000);
    a[1] = new Current(10000);

    for (int i = 0; i < 2; i++)
    {
        cout << "Interest = "
             << a[i]->calculateInterest() << endl;
    }

    for (int i = 0; i < 2; i++)
    {
        delete a[i];
    }

    return 0;
}
