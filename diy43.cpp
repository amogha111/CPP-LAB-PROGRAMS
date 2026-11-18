
#include <iostream>
using namespace std;

class Tracer
{
    private:
        int id;

    public:
        Tracer(int x)
        {
            id = x;
            cout << "Object " << id << " created" << endl;
        }

        ~Tracer()
        {
            cout << "Object " << id << " destroyed" << endl;
        }
};

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        Tracer *t = new Tracer(i);

        cout << "Inside loop: " << i << endl;

        delete t;
    }

    cout << "Program ended" << endl;

    return 0;
}
