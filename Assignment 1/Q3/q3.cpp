/*
 * q3.cpp
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 *      3. Write a C++ program to compute quotient and remainder.
 */



#include <iostream>
using namespace std;

class compute
{
	int quotient,reminder;
public:
	void getcompute(int no1, int no2)
	{
		quotient = no1 / no2;
		reminder = no1 % no2;

		cout << "Quotient :" << quotient << endl;
		cout << "Reminder :" << reminder;
 	}
};

int main()
{
	int a,b;
	cout << "Enter 2 numbers :";
	cin >> a >> b;

	compute obj;
	obj.getcompute(a ,b);

	return 0;
}
