/*
 * memberFun.cpp
 *
 *  Created on: 12-Jul-2024
 *      Author: root
 */



// member function in a class
#include <iostream>
using namespace std;

class myclass
{
public:
	// static member function
	static void printMsg()
	{
		cout << "Welcome to GfG!";
	}
};

// main function
int main()
{
	// invoking a static member function
	myclass::printMsg();
}
