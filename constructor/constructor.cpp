/*
 * constructor.cpp
 *
 *  Created on: 16-Jul-2024
 *      Author: root
 */




#include <iostream>
using namespace std;

class cube{
public:
	int side;
	cube(){
		side = 10;
		cout << "inside constructor";
	}
};
int main()
{
	cube c;
	cout << c.side;
	return 0;
}
