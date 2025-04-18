/*
 * q8.c
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 *      8. Write a C++ program to compute the sum of the specified number of Prime numbers.
For example when n = 7,
s = 2 + 3 + 5 + 7 + 11 + 13 + 17 = 58.
 */




#include <iostream>
using namespace std;

class primeSum
{
	int n;
public:
	int isPrime(int n)
	{
		int flag = 1;
		for(int i = 2; i<n ;i++)
		{
			if(n%i == 0)
			{
				flag = 0;
				break;
			}
		}
		return flag;
	}
};
int main()
{
	primeSum p;

	int n,check = 2 ,count = 0 ,sum = 0;
	cout << "Enter n :";
	cin >> n;

	while(n != count)
	{
		if(p.isPrime(check))
		{
			count++;
			sum += check;
		}
		check++;
	}
	cout << "Sum : " << sum;
	return 0;
}
