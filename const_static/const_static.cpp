/*
 * const_static.cpp
 *
 *  Created on: 15-Jul-2024
 *      Author: root
 */




#include <iostream>
using namespace std;

int main()
{
	const int no = 10;
//	no = 1045;
//	no = 10; // error;

	static int number = 144;

	const float PI = 3.14;
//	PI=7.25; // error;

	char const ch = 'R';


	cout << no << endl;
	cout << number << endl;
	cout << PI << endl;
	cout << ch <<endl;

	return 0;
}
