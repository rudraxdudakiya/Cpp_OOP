/*
 * q16.cpp
 *
 *  Created on: 18-Jul-2024
 *      Author: root
 *      16. Write a menu driven C++ program with following option
a. Accept elements of an array
b. Display elements of an array
c. Sort the array using insertion sort method
d. Sort the array using selection sort method
e. Sort the array using bubble sort method
Write C++ functions for all options. The functions should have two parameters name of the array
and number of elements in the array.
 */

/*


#include <iostream>
#define size 50
using namespace std;

class Array
{
	int a[size] ,n;
public:
	void input(int num)
	{
		n=num;
		for(int i=0;i<n;i++)
		{
			cout<<"a["<<i<<"]"<<":";
			cin>>a[i];
		}
	}
	void print()
	{
		cout<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	void Insertion()
	{
		int i,j,element;
		for(i=1;i<n;i++)
		{
			element = a[i];
			j = i-1;
			while(j>=0&&a[j]>element)
			{
				a[j+1] = a[j];
				j--;
			}
			a[j+1] = element;
		}
		print();
	}
	void Selection()
	{
		for(int i=0;i<size-1;i++)
		{
			int min=i;
			for(int j=i+1;j<size;j++)
			{
				if(a[j]<a[min])
				{
					min=j;
				}
			}
			int temp = a[i];
			a[i] = a[min];
			a[min]=temp;
		}
		print();
	}

};

int main()
{
	Array obj;
	int ch,n;
	cout << "Enter the size of array:";
	cin>>n;
	if(n > size)
	{
		cout << "Overflow";
		return -1;
	}
	obj.input(n);

	do{

		cin>>ch;
		switch(ch)
		{
			case 1:
				printf("Your array :\n");
				obj.print();
				break;
			case 2:
				obj.Insertion();
				break;
			case 3:
				obj.Selection();
				break;
			case 5:
				printf("Exited Successfully.");
				break;
			default:
				printf("Invalid.");
		}
	} while(ch != 5);
	return 0;
}

*/
#include<iostream>
using namespace std;

class Array
{
	int x[50],size,min,temp;
public:
	void input()
	{
		cout<<"Enter the size of element:"<<endl;
		cin>>size;
		x[size];
		cout<<"enter your element:"<<endl;
		for(int i=0;i<size;i++)
		{
			cin>>x[i];
		}
	}

	void print()
	{
		for(int i=0;i<size;i++)
		{
		cout<<x[i]<<" ";
		}
	}
	void insertionsort()
	{
		for(int i=1;i<size;i++)
		{
			int key=x[i];
			int j=i-1;
			while(j>=0 && x[j]>key)
			{
				x[j+1]=x[j];
				j=j-1;
			}
			x[j+1]=key;
		}
	}

	void selectionsort()
	{
		for(int i=0;i<size-1;i++)
		{
			int min=i;
			for(int j=i+1;j<size;j++)
			{
			if(x[j]<x[min])
			{
				min=j;
			}
		}
		swap(x[min],x[i]);
		}
	}

	void bubblesort()
	{
		for(int i=0;i<size-1;i++)
		{
			for(int j=0;j<size-i-1;j++)
			{
				if(x[j]>x[j+1])
				{
					int temp=x[j];
					x[j]=x[j+1];
					x[j+1]=temp;
				}
			}
		}
	}
};


int main()
{
	Array sort;
	int ch;
	do
	{
		cout<<"\n1)Insert:\n2)Display Array:\n3)Insertion Sort\n4)Selection Sort\n5)Bubble Sort\n6)Exit chose:";
		cin>>ch;

		switch(ch)
		{
			case 1:
				 sort.input();
				 break;
			case 2:
				 sort.print();
				 break;
			case 3:
				 sort.insertionsort();
				 sort.print();
				 break;
			case 4:
				 sort.selectionsort();
				 sort.print();
				 break;
			case 5:
				 sort.bubblesort();
				 sort.print();
				 break;
			case 6:
				cout<<"Exiting program"<<endl;
				break;
			default:
				cout<<"Invalid choice"<<endl;
		}
	}while(ch!=6);

	return 0;
}



