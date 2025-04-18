/*
 * singleInheritance.cpp
 *
 *  Created on: 09-Aug-2024
 *      Author: root
 */




#include <iostream>
using namespace std;

class B
{
	int a;
public:
	int b;
	void set_ab();
	int get_a();
	void show_a();
};

class D:public B
{
	int c;
public:
	void mul();
	void display();
};

void B::set_ab()
{
	a=5;
	b=10;
}
int B::get_a()
{
	return a;
}
void B::show_a()
{
	cout<<"a : "<<a;
}

void D::mul()
{
	c = b*get_a();
}
void D::display()
{
	cout<<"c : "<<c<<endl;
	cout<<"a : "<<get_a()<<endl;
	cout<<"b : "<<b<<endl;
}
int main()
{
	D d;
	d.set_ab();
	d.mul();
	d.display();
	d.b=20;
	d.mul();
	d.display();

	return 0;
}
