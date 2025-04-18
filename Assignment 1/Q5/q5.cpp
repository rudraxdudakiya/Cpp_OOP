/*
 * q5.cpp
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 *      5. Write a C++ program to print the code (ASCII code) of a given character.
 *
 */



#include <iostream>
using namespace std;

class Ascii
{
	int ch;
public:
	void getAscii(char c)
	{
		ch = (int)c;
		cout << ch << endl;
	}
};

int main()
{
	char ch;
	cout << "Enter character :";
	cin >> ch;

	Ascii character;
	character.getAscii(ch);
	return 0;
}
