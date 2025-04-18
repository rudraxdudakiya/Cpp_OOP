/*
 * q4.cpp
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 *      4. Write a C++ program to check whether a number is positive, negative or zero.
 */



#include <iostream>
using namespace std;

class checkNo
{
	int n;
public:
	void setNo(int num)
	{
		n = num;
	}
	void check()
	{
		if(n>0)
			cout << "n is Positive";
		else if(n<0)
			cout << "n is Negative";
		else
			cout << "n is Zero";
	}
};
int main()
{
	int no;
	cout << "Enter the number :";
	cin >> no;

	checkNo n;
	n.setNo(no);
	n.check();
	return 0;
}
