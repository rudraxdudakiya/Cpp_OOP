/*
 * q2.cpp
 *
 *  Created on: 22-Aug-2024
 *      Author: root
 */

#include <iostream>
using namespace std;

class arr
{
	int *a;
public:
	int size;

	void input();
	void search();
	void bubble();
	void sum();
	void average();
	void max();
	void min();
	void swapFirst_Last();
	~arr()
	{
		delete[] a;
	}
};

void arr:: input()
{
	cout << "Enter the number of the array elements :";
	cin >> size;

	a = new int[size];
	for(int i=0; i<size; i++)
	{
		cout<<"a["<<i<<"] : ";
		cin>>a[i];
	}
	for(int i=0; i<size; i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
void arr:: search()
{
	int i;
	int search,flag=1;
	cout<<"\n\nEnter Element You want to search :";
	cin>>search;
	for(i=0;i<size;i++)
	{
		if(search == a[i])
		{
			cout<<"Element "<<search<<" is found in array" <<i<<endl;
			flag=0;
			return;
		}
	}
	if(flag)
	{
		cout<<"Element "<<search<<" is not found at index "<<endl;
	}
}
void arr:: bubble()
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0; i<size; i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
void arr:: sum()
{
	int s=0;
	for(int i=0; i<size; i++)
	{
		s+=a[i];
	}
	cout<<"Sum : "<<s<<endl;
}
void arr:: average()
{
	int s=0;
	float avg;
	for(int i=0; i<size; i++)
	{
		s+=a[i];
	}
	avg = (float)s/size;
	cout<<"average : "<<avg<<endl;
}
void arr:: max()
{
	int max = a[0];
	for(int i=0; i<size; i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	cout << "Maximum array element : "<<max<<endl;


}
void arr:: min()
{
	int min = a[0];
	for(int i=0; i<size; i++)
	{
		if(a[i] < min)
		{
			min = a[i];
		}
	}
	cout << "Minimum array element : "<<min<<endl;
}
void arr:: swapFirst_Last()
{
	int t = a[0];
	a[0] = a[size-1];
	a[size-1] = t;
	for(int i=0; i<size; i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
int main()
{
	arr a;
	int ch;

	do
	{
		cout<<"\t\t1D Array Operations\n"<<endl;
		cout<<"\t1. Insert"<<endl;
		cout<<"\t2. Search"<<endl;
		cout<<"\t3. Bubble sort"<<endl;
		cout<<"\t4. Sum of array elements."<<endl;
		cout<<"\t5. Average of array elements."<<endl;
		cout<<"\t6. Find Maximum value from array elements."<<endl;
		cout<<"\t7. Find Minimum value from array elements."<<endl;
		cout<<"\t8. Swap first and last element of an array."<<endl;
		cout<<"\t9. Exit \nEnter your choice :"<<endl;
		cin>>ch;

		switch(ch)
		{
			case 1:
				a.input();
				break;
			case 2:
				a.search();
				break;
			case 3:
				a.bubble();
				break;
			case 4:
				a.sum();
				break;
			case 5:
				a.average();
				break;
			case 6:
				a.max();
				break;
			case 7:
				a.min();
				break;
			case 8:
				a.swapFirst_Last();
				break;
			case 9:
				cout<<"Thank You !"<<endl;
				break;
			default:
				cout<<"Invalid Choice"<<endl;
		}
	} while(ch != 9);

	return 0;
}


