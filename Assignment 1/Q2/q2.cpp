/*
 * q2.cpp
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 *		2. Write a C++ program to convert temperature in Celsius to Fahrenheit.
 */



#include <iostream>
using namespace std;

class TempConvert
{
	float C,F;
public :
	void setValue(float celsius)
	{
		C = celsius;
		F = 0;
	}

	float Convert()
	{
		F = (C*9/5) + 32;
		return F;
	}
};
int main()
{
	float c;
	cout << "Enter the temperature in celsius :";
	cin >> c;
	TempConvert C2F;
	C2F.setValue(c);

	cout << c << " in Fahrenheit :" << C2F.Convert() << endl;

	return 0;
}
