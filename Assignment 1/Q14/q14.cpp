/*
 * q14.cpp
 *
 *  Created on: 18-Jul-2024
 *      Author: root
 *      14. Write a C++ program to reverse the element of an integer 1-D array.
 */



#include <iostream>
using namespace std;

class array
{
	int n ,a[50];
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

	void reverse()
	{
		cout << "Before swap :"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<"\t";
		}

		for(int i=0,j=n-1;i<j;i++,j--)
		{
			int temp;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}

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
	a.reverse();

	return 0;
}
