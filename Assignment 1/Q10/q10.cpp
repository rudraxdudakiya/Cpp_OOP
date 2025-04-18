/*
 * q10.cpp
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 *      10. Write a C++ program to display the number in reverse order.
 */

#include <iostream>
using namespace std;

class reverse
{
	int num;
public:
	int revNum = 0 ,reminder;
	void xreverse(int n)
	{
		num = n;
		while(num>0)
		{
			reminder = num %10;
			revNum = revNum * 10 + reminder;
			num/=10;
		}
		cout << revNum;
	}
};
int main()
{
	reverse obj;
	int n;
	cout << "Enter num :";
	cin >> n;
	obj.xreverse(n);
	return 0;
}
