/*
 * class.cpp
 *
 *  Created on: 15-Jul-2024
 *      Author: root
 */




#include <iostream>
//#include <string>
using namespace std;

class student
{
public: // Access modifier can be accessible in all functions.

	int rollno;
	string name;

private: //Access modifier can be accessible in class block only.
	float SGPA;
};
int main()
{
	student s; // creating an object.
	s.rollno = 1045; //valid
	s.name = "Rudrax Dudakiya"; //valid

	//s.SGPA = 8.64; // invalid because data member SGPA is private.
	//error:
	/*
	 * class.cpp:31:4: error: ‘float student::SGPA’ is private within this context
   31 |  s.SGPA = 8.64; // invalid because data member SGPA is private.
      |    ^~~~
../class.cpp:23:8: note: declared private here
   23 |  float SGPA;
      |        ^~~~
	 */

	return 0;
}
