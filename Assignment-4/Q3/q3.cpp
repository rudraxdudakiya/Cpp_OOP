/*
 * q3.cpp
 *
 *  Created on: 11-Oct-2024
 *      Author: root
 */

//Design Employee Management System.
//a) Design appropriate classes and make use of inheritance.
//b) Make use of constructors to initialize the members.

#include <iostream>
using namespace std;

class person
{
public:
    string name, city, gender, email;
    int age;

    person()
    {
    	name = city = gender = email = " ";
    	age = 0;
    }
    person(string name, string gender, string city, string email, int age)
    {
        this->city = city;
        this->age = age;
        this->gender = gender;
        this->name = name;
        this->email = email;
    }
    void displayPerson()
    {
        cout << "\n--- Personal Details ---\n\n";
        cout << "Name    : " << name << endl;
        cout << "Gender  : " << gender << endl;
        cout << "Age     : " << age << endl;
        cout << "City    : " << city << endl;
        cout << "Email   : " << email << endl;
    }
};

class position
{
public:
    string designation, positionLevel;
    int workHour, dd, mm, yy;

    position()
    {
    	designation = positionLevel = " ";
    	workHour = dd = mm = yy = 0;
    }
    position(string designation, string positionLevel, int workHour, int dd, int mm, int yy)
    {
    	this->designation = designation;
    	this->positionLevel = positionLevel;
        this->dd = dd;
        this->mm = mm;
        this->yy = yy;
        this->workHour = workHour;
    }

    void displayPosition()
    {
        cout << "\n--- Position ---\n\n";
        cout << "Position         : " << designation << endl;
        cout << "Position Level   : " << positionLevel << endl;
        cout << "Date of Joining  : " << dd << "/" << mm << "/" << yy << endl;
        cout << "Working Hours    : " << workHour << endl;
    }
};

class Employee : public position, public person
{
public:
    string dept;
    int eid;
    float salary, exp;

    Employee()
    {
    	dept = " ";
    	eid = 0;
    	salary = exp = 0;
    }
    Employee(string dept, int eid, float salary, float exp, string name, string gender, string city, string email, int age, string designation, string positionLevel, int workHour, int dd, int mm, int yy)
    : position(designation, positionLevel, workHour, dd, mm, yy), person(name, gender, city, email, age)
    {
        this->dept = dept;
        this->eid = eid;
        this->salary = salary;
        this->exp = exp;
    }

    void Display()
    {
        cout << "--- Employee Details ---\n\n";
        person::displayPerson();
        position::displayPosition();
        cout << "Department    : " << dept << endl;
        cout << "Employee ID   : " << eid << endl;
        cout << "Salary        : $" << salary << endl;
        cout << "Experience    : " << exp << " years" << endl;
        cout << "\n---------------------------\n";
    }
};

int main()
{
    Employee employees[100];
    int currentEmployees = 0;
    int choice;

    do {
        cout << "\nEmployee Management System Menu\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            if (currentEmployees >= 100)
            {
                cout << "Cannot add more employees. Maximum limit reached.\n";
                break;
            }

            string name, gender, city, email, dept, designation, positionLevel;
            int age, eid, workHour, dd, mm, yy;
            float salary, exp;

            cout << "\nEnter Employee Details:\n";
            cout << "Name: ";
            cin >> name;
            cout << "Gender: ";
            cin >> gender;
            cout << "City: ";
            cin >> city;
            cout << "Email: ";
            cin >> email;
            cout << "Age: ";
            cin >> age;

            cout << "Designation: ";
            cin >> designation;
            cout << "Position Level: ";
            cin >> positionLevel;
            cout << "Working Hours (per week): ";
            cin >> workHour;

            cout << "Date of Joining (dd mm yyyy): ";
            cin >> dd >> mm >> yy;

            cout << "Department: ";
            cin >> dept;
            cout << "Employee ID: ";
            cin >> eid;
            cout << "Salary: $";
            cin >> salary;
            cout << "Experience (in years): ";
            cin >> exp;

            employees[currentEmployees] = Employee(dept, eid, salary, exp, name, gender, city, email, age, designation, positionLevel, workHour, dd, mm, yy);
            currentEmployees++;
            break;
        }
        case 2:
        {
            cout << "\nDisplaying Employee Details:\n";
            for (int i = 0; i < currentEmployees; i++)
            {
                employees[i].Display();
            }
            break;
        }
        case 3:
        {
            cout << "Exiting the program...\n";
            return 0;
        }
        default:
            cout << "Invalid choice! Please enter again.\n";
        }
    } while (choice != 3);
    return 0;
}
