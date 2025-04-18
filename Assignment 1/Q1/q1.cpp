/*
 * q1.c
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 *      1. Write a C++ program to find the Area and Perimeter of a Rectangle.
 */



#include <iostream>
using namespace std;

class Rectangle
{
	float l,w;

public :
	void setValue(float length, float breath)
	{
		l = length;
		w = breath;
	}
	float getArea()
	{
		return l*w;
	}
	float getPerimeter()
	{
		return 2*(l+w);
	}
};

int main()
{
	float length,breath;
	cout << "Enter the length :" << endl;
	cin >> length;
	cout << "Enter the breath :" << endl;
	cin >> breath;
	Rectangle r;

	r.setValue(length, breath);
	cout << "Area : " << r.getArea() << endl;
	cout << "Perimeter : " << r.getPerimeter()<< endl;

	return 0;
}
