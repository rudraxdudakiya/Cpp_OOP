/*
 * variable.cpp
 *
 *  Created on: 12-Jul-2024
 *      Author: root
 */




// C++ program to demonstrate
// the use of static Static
// variables in a Function
#include <iostream>
#include <string>
using namespace std;

void demo()
{
	// static variable
	static int count = 0;
	cout << count << " ";

	// value is updated and
	// will be carried to next
	// function calls
	count++;
}

int main()
{
	for (int i = 0; i < 5; i++)
		demo();
	return 0;
}
