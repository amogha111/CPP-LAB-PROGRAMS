
#include <iostream>
#include <exception>
using namespace std;

class InsufficientFunds : public exception
{
    public:
        const char* what() const noexcept override
        {
            return "Insufficient balance!";
        }
};

class BankAccount
{
    private:
        float balance;

    public:
        BankAccount(float b)
        {
            balance = b;
        }

        void deposit(float amount)
        {
            balance += amount;
            cout << "Amount deposited: " << amount << endl;
        }

        void withdraw(float amount)
        {
            if (amount > balance)
                throw InsufficientFunds();

            balance -= amount;

            cout << "Amount withdrawn: "
                 << amount << endl;
        }

        void display()
        {
            cout << "Current Balance = "
                 << balance << endl;
        }
};

int main()
{
    BankAccount b(5000);

    b.display();

    try
    {
        b.withdraw(6000);
    }
    catch (InsufficientFunds &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    b.display();

    return 0;
}
