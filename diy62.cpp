
#include <iostream>
using namespace std;

class Fraction
{
    private:
        int num, den;

        int gcd(int a, int b)
        {
            if (b == 0)
                return a;

            return gcd(b, a % b);
        }

        void simplify()
        {
            int g = gcd(abs(num), abs(den));

            num = num / g;
            den = den / g;

            if (den < 0)
            {
                num = -num;
                den = -den;
            }
        }

    public:
        Fraction(int n = 0, int d = 1)
        {
            num = n;
            den = d;

            if (den != 0)
                simplify();
        }

        friend istream& operator>>(istream &in, Fraction &f)
        {
            cout << "Enter numerator: ";
            in >> f.num;

            cout << "Enter denominator: ";
            in >> f.den;

            if (f.den == 0)
            {
                cout << "Invalid denominator!" << endl;
                in.setstate(ios::failbit);
            }
            else
            {
                f.simplify();
            }

            return in;
        }

        friend ostream& operator<<(ostream &out, Fraction f)
        {
            out << f.num << "/" << f.den;
            return out;
        }
};

int main()
{
    Fraction f;

    cin >> f;

    if (cin)
        cout << "Simplified Fraction: " << f << endl;

    return 0;
}
