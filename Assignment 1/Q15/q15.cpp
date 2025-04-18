/*
 * q15.cpp
 *
 *  Created on: 18-Jul-2024
 *      Author: root
 *      15. Write a C++ program to find the largest and smallest element of an array
 */



#include <iostream>
using namespace std;

class Large_Small
{
	int a[50] ,n ,min ,max;
public:
	void input()
	{
		cout << "enter the size :";
		cin >> n;
		if(n>50)
		{
			cout << "Overloaded";
			return ;
		}
		for(int i=0; i<n; i++)
		{
			cout<<"a["<<i<<"] : ";
			cin>>a[i];
		}
	}

	void minMax()
	{
		min = max = a[0];
		for(int i=0; i<n; i++)
		{
			if(a[i]>max)
			{
				max = a[i];
			}
			if(a[i] < min)
			{
				min = a[i];
			}
		}
		cout << "Minimum array element : "<<min<<endl;
		cout << "Maximum array element : "<<max<<endl;
	}
};
int main()
{
	Large_Small a;
	a.input();
	a.minMax();
	return 0;
}
