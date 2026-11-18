
#include <iostream>
using namespace std;

class Employee
{
    protected:
        string name;
        int id;

    public:
        void getEmployee()
        {
            cout << "Enter name: ";
            cin >> name;

            cout << "Enter ID: ";
            cin >> id;
        }

        void displayEmployee()
        {
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
        }
};

class Manager : public Employee
{
    private:
        int teamSize;

    public:
        void getData()
        {
            getEmployee();

            cout << "Enter team size: ";
            cin >> teamSize;
        }

        void display()
        {
            cout << "\nManager Details:" << endl;
            displayEmployee();

            cout << "Team Size: "
                 << teamSize << endl;
        }
};

class Engineer : public Employee
{
    private:
        string skill;

    public:
        void getData()
        {
            getEmployee();

            cout << "Enter skill: ";
            cin >> skill;
        }

        void display()
        {
            cout << "\nEngineer Details:" << endl;
            displayEmployee();

            cout << "Skill: " << skill << endl;
        }
};

int main()
{
    Manager m;
    Engineer e;

    cout << "Enter Manager Details:" << endl;
    m.getData();

    cout << "\nEnter Engineer Details:" << endl;
    e.getData();

    m.display();
    e.display();

    return 0;
}
