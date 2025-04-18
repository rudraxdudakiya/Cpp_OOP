/*
 * eg.cpp
 *
 *  Created on: 15-Jul-2024
 *      Author: root
 */




#include <iostream>
using namespace std;

class student
{
	static string name;
	static string fname;
	static string mname;

public:
	static void disp(){
		cout << "The name of student is " << name << endl;
		cout << "The First name of student is " << fname << endl;
		cout << "The Middle name of student is " << mname << endl;
	}
};

string student::name = "Rudrax";
string student::fname = "Dudakiya";
string student::mname = "Hasmukhbhai";

int main()
{
	student std;
	cout << "Student :" <<  endl;

	std.disp();

	student :: disp();

	return 0;
}
