/*
 * task.cpp
 *
 *  Created on: 12-Aug-2024
 *      Author: root
 */




#include <iostream>
using namespace std;
#define PI 3.14

class Rectangle
{
protected:
	float l,b;
};
class Circle
{
protected:
	float r;
};

class Area_Perimeter : public Circle,public Rectangle
{
public:
	Area_Perimeter(float redius,float length,float breath)
	{
		r = redius;
		l = length;
		b = breath;
	}
	float getAreaOFCircle()
	{
		return PI*r*r;
	}
	float getPerimeterOFCircle()
	{
		return 2*PI*r;
	}
	float getPerimeterOFRect()
	{
		return l*b;
	}
	float getAreaOFRect()
	{
		return 2*(l+b);
	}
};

int main()
{
	float redius;
	cout << "Enter the redius of Circle :" << endl;
	cin >> redius;

	float length,breath;
	cout << "Enter the length of Rectangle :" << endl;
	cin >> length;
	cout << "Enter the breath of Rectangle :" << endl;
	cin >> breath;

	Area_Perimeter r(redius,length,breath);
	cout << "Area of circle : " << r.getAreaOFCircle() << endl;
	cout << "Perimeter of circle: " << r.getPerimeterOFCircle()<< endl;

	cout << "Area of Rectangle : " << r.getAreaOFRect() << endl;
	cout << "Perimeter of Rectangle: " << r.getPerimeterOFRect()<< endl;
	return 0;
}
