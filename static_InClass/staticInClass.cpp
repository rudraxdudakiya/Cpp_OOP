/*
 * variablesInClass.cpp
 *
 *  Created on: 12-Jul-2024
 *      Author: root
 */




// C++ program to demonstrate static
// variables inside a class

#include <iostream>
using namespace std;

class GfG {
public:
	static int i;

	GfG(){
		// Do nothing
	};
};

int main()
{
	GfG obj1;
	GfG obj2;
	//obj1.i = 2; // i is alreadedy allocated and cant be reinitialized
	obj2.i = 3;

	// prints value of i
	cout << obj1.i << " " << obj2.i;
}
