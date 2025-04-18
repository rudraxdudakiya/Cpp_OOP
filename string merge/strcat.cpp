/*
 * strcat.cpp
 *
 *  Created on: 15-Jul-2024
 *      Author: root
 */




#include <iostream>
using namespace std;

int main()
{
	string str1, str2, merge;

	cout << "Enter two strings :" << endl;
	cin >> str1 >> str2;
	merge = str1 +str2;

	cout << "merged string :" << merge ;
	return 0;
}
