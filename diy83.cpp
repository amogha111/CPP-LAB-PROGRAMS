
#include <iostream>
using namespace std;

class Base
{
    public:
        ~Base()
        {
            cout << "Base destructor called" << endl;
        }
};

class Derived : public Base
{
    private:
        int *ptr;

    public:
        Derived()
        {
            ptr = new int[100];

            cout << "Derived object created" << endl;
        }

        ~Derived()
        {
            delete[] ptr;

            cout << "Derived destructor called" << endl;
        }
};

int main()
{
    Base *b = new Derived();

    delete b;

    return 0;
}
