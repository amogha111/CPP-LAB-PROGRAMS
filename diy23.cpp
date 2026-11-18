
#include <iostream>
using namespace std;

class Minimum
{
public:
    inline int minVal(int a, int b)
    {
        return (a < b) ? a : b;
    }

    inline int minVal(int a, int b, int c)
    {
        return minVal(minVal(a, b), c);
    }
};

int main()
{
    Minimum obj;

    cout << "Minimum of two numbers = "
         << obj.minVal(10, 20) << endl;

    cout << "Minimum of three numbers = "
         << obj.minVal(15, 5, 25) << endl;

    return 0;
}
