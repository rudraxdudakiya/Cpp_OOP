/*
 * q13.cpp
 *
 *  Created on: 18-Jul-2024
 *      Author: root
		13. Write a C++ program to swap first and last element of an integer 1-d array.
 */



#include <iostream>
using namespace std;

class array
{
	int a[50],n;
public:
	void input()
	{
		cout<<"Enter the size of array :";
		cin>>n;
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
	void swap()
	{
		cout << "Before swap :"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<"\t";
		}
		int temp;
		temp = a[0];
		a[0] = a[n-1];
		a[n-1] = temp;

		cout << "\nAfter swap :"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<"\t";
		}
	}
};
int main()
{
	array a;
	a.input();
	a.swap();
	return 0;
}
