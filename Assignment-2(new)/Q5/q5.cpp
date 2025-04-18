/*
 * q5.cpp
 *
 *  Created on: 29-Aug-2024
 *      Author: root
 */


#include <iostream>
using namespace std;

class student
{
	int rno,size;
	string name;
	float marks[3],total;
public:
	float per;
	char grade;
	student()
	{
		rno=0;
		name="";
		marks[0] = marks[1] = marks[2] = 0;
		total = 0;
		per=0;
		grade='\0';
		size=0;
	}
	void userInput()
	{
		cout<<"Enter the roll number of student :";
		cin>>rno;
		cout<<"Enter the name :";
		cin>>name;
		cout<<"Enter the marks of 3 subjects :\n";
		for(int i=0;i<3;i++)
		{
			cout<<"Sub "<<i<<": ";
			cin>>marks[i];
			total+=marks[i];
		}
		per = (float)total/3;
		if(per>90) {
			grade = 'A';
		} else if(per>80) {
			grade = 'B';
		} else if(per>75) {
			grade = 'C';
		} else if(per>70) {
			grade = 'D';
		} else if(per>60) {
			grade = 'E';
		} else {
			grade = 'F';
		}
	}
	void display()
	{
		cout<<rno<<"\t"<<name<<"\t"<<marks[0]<<"\t"<<marks[1]<<"\t"<<marks[2]<<"\t"<<total<<"\t"<<per<<"\t"<<grade<<"\n";
	}
};
int main()
{
	int size;
	cout<<"Enter the number of student :";
	cin>>size;
	student s[size];

	for(int i=0;i<size;i++)
	{
		s[i].userInput();
	}
	cout<<"\nRollno.\tName\tSub1\tSub2\tSub3\tTotal\tPer\tGrade\n\n";
	for(int i=0;i<size;i++)
	{
		s[i].display();
	}

		student rank1 = s[0];
	for(int i=0;i<size;i++)
	{
		if(rank1.per<s[i].per)
			rank1=s[i];
	}
	cout<<"\nRank 1:\n";
	rank1.display();
	return 0;
}

