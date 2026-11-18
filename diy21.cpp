
#include <iostream>
using namespace std;

class Volume
{
public:
    double volume(double side)
    {
        return side * side * side;
    }

    double volume(double l, double b, double h)
    {
        return l * b * h;
    }

    double volume(double r, double h)
    {
        return 3.14 * r * r * h;
    }
};

int main()
{
    Volume obj;

    cout << "Volume of Cube = " << obj.volume(5) << endl;

    cout << "Volume of Cuboid = "
         << obj.volume(2, 3, 4) << endl;

    cout << "Volume of Cylinder = "
         << obj.volume(3, 5) << endl;

    return 0;
}
