/*
 * q1.cpp
 *
 *  Created on: 20-Aug-2024
 *      Author: root
 */

#include <iostream>
using namespace std;

class StrOperations
{
	string s;
public:
	StrOperations(string str)
	{
		s = str;
	}

	int getLength()
	{
		int length=0,i=0;
		while(s[i] != '\0')
		{
			i++;
			length++;
		}
		return length;
	}

	void UpperCase()
	{
		string str=s;
		int i=0;
		while(str[i] != '\0')
		{
			if(str[i]>='a'&&str[i]<='z')
			{
				str[i]-=32;
			}
			i++;
		}
		cout<<"'"<<s<<"' in Upper Case : "<<str<<endl;
	}

	void LowerCase()
	{
		string str=s;
		int i=0;
		while(str[i] != '\0')
		{
			if(str[i]>='A'&&str[i]<='Z')
			{
				str[i]+=32;
			}
			i++;
		}
		cout<<"'"<<s<<"' in Lower Case : "<<str<<endl;
	}

	void StrCompare()
	{
		string temp;
		cout<<"Enter the string to compare with '"<<s<<"'"<<" : ";
		cin>>temp;
		int l1=getLength();
		int l2=0;
		int i=0;
		while(temp[i] != '\0')
		{
			i++;
			l2++;
		}
		if(l1 != l2)
		{
			cout<<"\nBoth String are Different by length\n"<<"Length of "<<s<<" : "<<l1<<"\nLength of "<<temp<<" : "<<l2<<endl;
		}
		else
		{
			i=0;
			while(s[i] != '\0' && temp[i] != '\0')
			{
				if(s[i]!=temp[i])
				{
					cout<<"Both strings are not same.\n"<<"Diffence at "<<i<<" is "<<s[i]-temp[i]<<endl;
					break;
				}
				i++;
			}
			if(i==l1&&i==l2)
			{
				cout<<"Both strings are same.\n";
			}
		}
	}

	void StrCopy()
	{
		char cp[50];
		int i=0;
		while(s[i] != '\0')
		{
			cp[i] = s[i];
			i++;
		}
		cp[i] = '\0';
		cout<<"Old string\ns : "<<s<<endl;
		cout<<"Copied to the new string \ncp : "<<cp<<endl;
	}

	void StrCat()
	{
		char concate[50];
		cout<<"Enter the string to concate with "<<s<<" :";
		cin>>concate;
		int l = getLength();
		int i=0;
		while(concate[i] != '\0')
		{
			s[l] = concate[i];
			i++;
			l++;
		}
		s[l]='\0';
		cout<<"concated string\ns : ";
		i = 0;
		while(s[i] != '\0')
		{
			cout<<s[i];
			i++;
		}
		cout<<endl;
	}
	void reverse()
	{
		char cp[50];
		int idx=0;
		while(s[idx] != '\0')
		{
			cp[idx] = s[idx];
			idx++;
		}
		cp[idx] = '\0';
		for(int i=0,j=idx-1;i<j;i++,j--)
		{
//			swap(s[i],s[j]);
			char t;
			t=cp[i];
			cp[i]=cp[j];
			cp[j]=t;
		}
		cout<<"Orignal : "<<s<<endl;
		cout<<"Reversed : "<<cp<<endl;
	}
	void palindrome()
	{
		int l = getLength() ,flag=1;
		for(int i=0,j=l-1;i<j;i++,j--)
		{
			if(s[i]!=s[j])
			{
				cout<<"String isnot palindrome"<<endl;
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"String is palindrome"<<endl;
		}
		cout<<s;
	}
};
int main()
{
	string str;
	cout<<"Enter the string : "<<endl;
	cin>>str;

	StrOperations s(str);
	int ch;
	do
	{
		cout<<"\n\n\t\tString Operation"<<endl;
		cout<<"\t1. Length of the String"<<endl;
		cout<<"\t2. Upper Case"<<endl;
		cout<<"\t3. Lower Case"<<endl;
		cout<<"\t4. Comparison"<<endl;
		cout<<"\t5. Copy"<<endl;
		cout<<"\t6. Concatenation"<<endl;
		cout<<"\t7. Reverse"<<endl;
		cout<<"\t8. Palindrome"<<endl;
		cout<<"\t9. Exit \nEnter your choice :"<<endl;
		cin>>ch;

		switch(ch)
		{
			case 1:
				cout<<"Length of '"<<str<<"' : "<<s.getLength()<<endl;
				break;
			case 2:
				s.UpperCase();
				break;
			case 3:
				s.LowerCase();
				break;
			case 4:
				s.StrCompare();
				break;
			case 5:
				s.StrCopy();
				break;
			case 6:
				s.StrCat();
				break;
			case 7:
				s.reverse();
				break;
			case 8:
				s.palindrome();
				break;
			case 9:
				cout<<"Thank You !"<<endl;
				break;
			default:
				cout<<"Invalid Choice."<<endl;
		}
	} while(ch != 9);

	return 0;
}

