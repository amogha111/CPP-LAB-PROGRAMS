
#include <iostream>
using namespace std;

class Person
{
    protected:
        string name;

    public:
        void getPerson()
        {
            cout << "Enter name: ";
            cin >> name;
        }

        void displayPerson()
        {
            cout << "Name: " << name << endl;
        }
};

class Student : virtual public Person
{
    protected:
        int rollNo;

    public:
        void getStudent()
        {
            cout << "Enter roll number: ";
            cin >> rollNo;
        }
};

class Employee : virtual public Person
{
    protected:
        int empID;

    public:
        void getEmployee()
        {
            cout << "Enter employee ID: ";
            cin >> empID;
        }
};

class TA : public Student, public Employee
{
    private:
        string subject;

    public:
        void getData()
        {
            getPerson();
            getStudent();
            getEmployee();

            cout << "Enter subject: ";
            cin >> subject;
        }

        void display()
        {
            cout << "\nTeaching Assistant Details:" << endl;

            displayPerson();

            cout << "Roll Number: " << rollNo << endl;
            cout << "Employee ID: " << empID << endl;
            cout << "Subject: " << subject << endl;
        }
};

int main()
{
    TA t;

    t.getData();
    t.display();

    return 0;
}
