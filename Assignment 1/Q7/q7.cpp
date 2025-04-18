/*
 * q7.cpp
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 *      7. Write a C++ program to read an integer n and prints the factorial of n, assume that n ≤ 10.
 */




#include <iostream>
using namespace std;

class factorial
{
	int n;
public :
	void getFact()
	{
		n = 0;
		cout << "Enter n (assume n<= 10):";
		cin >> n;
		if(n>10)
		{
			cout << "Please enter n again.";
			return;
		}
		int fact = 1;
		for(int i = n; i>0; i--)
		{
			fact *= i;
		}
		cout << n << "! is " << fact <<endl;
	}
};
int main()
{
	factorial fact;

	fact.getFact();

	return 0;
}
