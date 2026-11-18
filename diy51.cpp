
#include <iostream>
using namespace std;

class Counter
{
    private:
        int count;
        static int totalCreated;
        static int currentlyAlive;

    public:
        Counter()
        {
            count = 0;
            totalCreated++;
            currentlyAlive++;
        }

        void increment()
        {
            count++;
        }

        void reset()
        {
            count = 0;
        }

        int get()
        {
            return count;
        }

        ~Counter()
        {
            currentlyAlive--;
        }

        static void showCount()
        {
            cout << "Total objects created = "
                 << totalCreated << endl;

            cout << "Currently alive = "
                 << currentlyAlive << endl;
        }
};

// Initialize static members
int Counter::totalCreated = 0;
int Counter::currentlyAlive = 0;

int main()
{
    Counter c1, c2, c3;

    c1.increment();
    c1.increment();

    c2.increment();

    Counter::showCount();

    {
        Counter c4, c5;

        cout << "\nInside block:" << endl;
        Counter::showCount();
    }

    cout << "\nAfter block:" << endl;
    Counter::showCount();

    return 0;
}
