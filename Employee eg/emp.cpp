/*
 * emp.cpp
 *
 *  Created on: 15-Jul-2024
 *      Author: root
 */




#include <iostream>
using namespace std;

class employee
{
private : //by Default
	int empid;
	string name;
	string position;
	int salary;

public:
	void setter(int id, string n, string pos, float s)
	{
		empid = id;
		name = n;
		position = pos;
		salary = s;
	}
	//getters:
	int getid()
	{
		return empid;
	}

	string getName()
	{
		return name;
	}

	string getPosition()
	{
		return position;
	}

	int getSalary()
	{
		return salary;
	}
};
int main()
{
	employee emp;
	emp.setter(1045, "Rudrax Dudakiya", "MD", 1500000);

	cout << "Employee id : " << emp.getid() << endl;
	cout << "Employee name : " << emp.getName() << endl;
	cout << "Employee designation : " << emp.getPosition() << endl;
	cout << "Employee salary : " << emp.getSalary() << endl;

	return 0;
}
