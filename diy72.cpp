
#include <iostream>
using namespace std;

class Shape
{
    protected:
        int sides;

    public:
        Shape(int s)
        {
            sides = s;
            cout << "Shape constructor called" << endl;
        }
};

class Polygon : public Shape
{
    protected:
        int angles;

    public:
        Polygon(int s, int a) : Shape(s)
        {
            angles = a;
            cout << "Polygon constructor called" << endl;
        }
};

class Rectangle : public Polygon
{
    private:
        int length, breadth;

    public:
        Rectangle(int s, int a, int l, int b)
            : Polygon(s, a)
        {
            length = l;
            breadth = b;

            cout << "Rectangle constructor called" << endl;
        }

        void display()
        {
            cout << "\nNumber of sides: " << sides << endl;
            cout << "Number of angles: " << angles << endl;
            cout << "Length: " << length << endl;
            cout << "Breadth: " << breadth << endl;

            cout << "Area = " << length * breadth << endl;
        }
};

int main()
{
    Rectangle r(4, 4, 10, 5);

    r.display();

    return 0;
}
