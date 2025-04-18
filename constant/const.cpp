/*
 * const.cpp
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 */




#include <iostream>
using namespace std;

class data
{
	string x;
public:
	void setdata(string);
	string getdata() const;
};

void data::setdata(string s) // scope
{
	x = s;
}

string data::getdata()const
{
	return x;
}
int main()
{
	data d;

	d.setdata("My xyz");

	cout << d.getdata();

	return 0;
}
