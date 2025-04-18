/*
 * q11.cpp
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 *      11. Write a C++ program to count all the vowels in a given string.
 */




#include <iostream>
using namespace std;

class vowel
{
	string str;
	char *p;
public:
	void input()
	{
		cout<<"Enter the string :";
		cin>>str;
		p = &str[0];
	}
	int getVowel()
	{
		int v = 0;

		while(*p != '\0')
		{
			if(*p == 'a' ||*p == 'e' ||*p == 'i' ||*p == 'o' ||*p == 'u' ||*p == 'A' ||*p == 'E' ||*p == 'I' ||*p == 'O' ||*p == 'U')
			{
				v++;
			}
			p++;
		}
		return v;
	}
};

int main()
{
	vowel v;
	v.input();
	cout << "vowels :" << v.getVowel();
	return 0;
}
