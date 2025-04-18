/*
 * q6.cpp
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 *      6. Write a C++ program to swap two numbers.
 *
 */


#include <iostream>
using namespace std;

class xswap
{
	int a,b;
public:
	void setxswap()
	{
		a = b = 0;
		cout << "Enter a :";
		cin >> a;

		cout << "Enter b :";
		cin >> b;
	}

	void change()
	{
		// int temp;
		// temp = a;
		// a = b;
		// b = temp;
		swap(a,b);
	}

	void get()
	{
		cout << "a :" << a << endl;
		cout << "b :" << b << endl;
	}
};

int main()
{
	xswap s;
	s.setxswap();
	s.get();
	cout << "\n After swap :" << endl;
	s.change();
	s.get();

	return 0;
}
