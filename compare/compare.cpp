/*
 * compare.cpp
 *
 *  Created on: 15-Jul-2024
 *      Author: root
 */




#include <iostream>
using namespace std;

int main()
{
	int a,b;

	cout << "Enter 2 number :";
	cin >> a >> b;

	if(a>b)
		cout << " a is bigger than b." << endl;
	else if(b>a)
		cout << " b is bigger than a." << endl;
	else
		cout << " a and b Both are same." << endl;

	return 0;
}
