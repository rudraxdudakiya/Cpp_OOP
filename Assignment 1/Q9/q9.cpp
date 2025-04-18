/*
 * q9.cpp
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 *      9. Write a C++ program to find the sum of first 10 natural numbers.
 */



#include <iostream>
using namespace std;

class myclass
{
	int sum = 0;
public:
	void naturalNum()
	{
		for(int i=1; i<=10; i++)
		{
			sum += i;
		}
		cout << "Sum : " << sum ;
	}
};
int main()
{
	myclass obj;
	obj.naturalNum();
	return 0;
}
