
#include <iostream>
using namespace std;

class Time
{
    private:
        int hh, mm;

    public:
        void setData(int h, int m)
        {
            hh = h;
            mm = m;
        }

        void display()
        {
            cout << hh << ":";

            if (mm < 10)
                cout << "0";

            cout << mm << endl;
        }

        friend Time laterOf(Time t1, Time t2);
};

Time laterOf(Time t1, Time t2)
{
    if (t1.hh > t2.hh)
        return t1;
    else if (t1.hh < t2.hh)
        return t2;
    else
    {
        if (t1.mm > t2.mm)
            return t1;
        else
            return t2;
    }
}

int main()
{
    Time t1, t2, result;

    t1.setData(10, 30);
    t2.setData(12, 45);

    cout << "First Time: ";
    t1.display();

    cout << "Second Time: ";
    t2.display();

    result = laterOf(t1, t2);

    cout << "Later Time: ";
    result.display();

    return 0;
}
