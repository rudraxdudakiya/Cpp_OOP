/*
 * multilevel.cpp
 *
 *  Created on: 09-Aug-2024
 *      Author: root
 */




#include <iostream>
using namespace std;

class student
{
protected:
	int roll_no;
public:
	void get_number(int a);
	void put_number();
};

class test:public student
{
protected:
	float sub1,sub2;
public:
	void get_marks(float,float);
	void put_marks();
};

class result:public test
{
	float total;
public:
	void display();
};

void student::get_number(int a)
{
	roll_no = a;
}
void student::put_number()
{
	cout<<"Roll Number : "<<roll_no<<endl;;
}
void test::get_marks(float m1,float m2)
{
	sub1=m1;
	sub2=m2;
}
void test::put_marks()
{
	cout<<"sub1 :"<<sub1<<"\nsub2 :"<<sub2<<endl;
}
void result::display()
{
	total=sub1+sub2;
	put_number();
	put_marks();
	cout<<"total marks : "<<total<<endl;
}
int main()
{
	result stud1;
	stud1.get_number(1045);
	stud1.get_marks(99, 92);
	stud1.display();
	return 0;
}
