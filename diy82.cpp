
#include <iostream>
#include <fstream>
using namespace std;

class Logger
{
    public:
        virtual void write(string msg) = 0;

        virtual ~Logger() {}
};

class ConsoleLogger : public Logger
{
    public:
        void write(string msg)
        {
            cout << "Console: " << msg << endl;
        }
};

class FileLogger : public Logger
{
    public:
        void write(string msg)
        {
            ofstream file("log.txt", ios::app);

            if (file.is_open())
            {
                file << msg << endl;
                file.close();

                cout << "Message written to file." << endl;
            }
            else
            {
                cout << "File opening failed!" << endl;
            }
        }
};

int main()
{
    ConsoleLogger c;
    FileLogger f;

    Logger *logger;

    int choice;
    string msg;

    cout << "1. Console Logger" << endl;
    cout << "2. File Logger" << endl;

    cout << "Enter choice: ";
    cin >> choice;

    cin.ignore();

    cout << "Enter message: ";
    getline(cin, msg);

    if (choice == 1)
        logger = &c;
    else if (choice == 2)
        logger = &f;
    else
    {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    logger->write(msg);

    return 0;
}
