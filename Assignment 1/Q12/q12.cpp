/*
 * q12.cpp
 *
 *  Created on: 18-Jul-2024
 *      Author: root
 *      Write a C++ program to find the sum and average of one dimensional integer array.
 */



#include <iostream>
using namespace std;

class compute
{
	int n;
public:

	void getAvg(int a[] ,int n)
	{
		float avg ,sum = 0;
		for(int i=0; i<n; i++)
		{
			sum += a[i];
		}
		avg = (float)sum/n;
		cout<<"Average : " <<avg<<endl;
		cout<<"Sum : "<<sum;

		return;
	}
};

int main()
{
	int a[50] ,size;
	cout << "Enter the size of the array :";
	cin >> size;

	if(size >50)
	{
		cout << "Overload";
		return -1;
	}

	for(int i=0; i<size; i++)
	{
		cout<<"a["<<i<<"] : ";
		cin>>a[i];
	}

	compute avg;
	avg.getAvg(a ,size);

	return 0;
}
