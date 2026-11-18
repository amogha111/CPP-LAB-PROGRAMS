
#include <iostream>
using namespace std;

class Calculator
{
public:
    int power(int base, int exp = 2)
    {
        int result = 1;

        for (int i = 1; i <= exp; i++)
        {
            result = result * base;
        }

        return result;
    }
};

int main()
{
    Calculator obj;

    cout << "Power(5) = " << obj.power(5) << endl;

    cout << "Power(2,10) = "
         << obj.power(2, 10) << endl;

    return 0;
}
