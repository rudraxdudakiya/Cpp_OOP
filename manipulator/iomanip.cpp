/*
 * iomanip.c
 *
 *  Created on: 12-Jul-2024
 *      Author: root
 */




#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int value;
	string str;

	cout << "enter value :";
	cin >> value;

	cout << "Enter the string :";
	cin >> str;

	cout << "Newline :";
	cout << "this is endl" << endl;
	cout << "new line" << endl;

	cout << "setw() :" << setw(20) << str << endl;

	cout << "setfill('character')" << setw(15) << setfill('*') << "Rudrax" <<endl;

	cout << "Conversion of number setiosflags():" << setiosflags(ios::showbase | ios::uppercase) << endl;
	cout << value << endl;
	cout << dec << "In decimal :" << value << endl;
	cout << hex << "In hexadecimal :" << value << endl;
	cout << oct << "In octal :" << value << endl;


	return 0;
}
