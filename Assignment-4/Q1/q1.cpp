/*
 * q1.cpp
 *
 *  Created on: 10-Oct-2024
 *      Author: root
 */


//Design a class called "Vehicle" which contains appropriate datamembers.
//Design a class "two-Wheeler" from vehicle which contains data member’s distance and mileage.
//Use overloading techniques.
//Assume further classes for inheritance and demonstrate the use of Multi-level inheritance for the above problem.

#include <iostream>
using namespace std;

class Vehicle
{
protected:
	int resistration_no, plate_no, model_year;
	string Model_name, color;
	void inputV()
	{
		cout << "registration no. : ";
		cin >> resistration_no;

		cout << "Plate no. : ";
		cin >> plate_no;

		cout << "Year of model : ";
		cin >> model_year;

		cout << "Name of model : ";
		cin >> Model_name;

		cout << "Color : ";
		cin >> color;
	}
};

class Two_Wheeler : public Vehicle
{
protected:
	float distance;
	int mileage;
	string company;

	void inputT()
	{
		cout << "Company name : ";
		cin >> company;

		cout << "Distance that traversed : ";
		cin >> distance;

		cout << "Mileage : ";
		cin >> mileage;
	}
};

class bike : public Two_Wheeler
{
	string type;
public :
	void Input()
	{
		Vehicle::inputV();
		Two_Wheeler::inputT();
		cout << "\n\nEnter the Details of bike\n\ntype of bike (sport, classic) : ";
		cin >> type;
	}
	void Display()
	{
		cout << type << "\t" << resistration_no << "\t" << plate_no << "\t\t" << company << "\t\t" << model_year << "\t\t" << distance << "\t\t" << mileage << endl;
	}

};

int main()
{
	int n;
	cout << "Enter the total number of vehicle : ";
	cin >> n;

	bike vehicle[n];

	for(int i=0; i<n; i++)
	{
		cout << "\n\nEnter the Details for Bike " << i+1 << "\n\n";
		vehicle[i].Input();
	}

	cout<<"\n\nDetails of Bike:\n\n";
	cout << "\n\n\t\t>> Two-Wheeler <<\n\nType\t\tResi_no\tPlate_no\tCompany\t\tModel_year\tDistance\tMilage(per hour)\n\n";
	for(int i=0; i<n; i++)
	{
		vehicle[i].Display();
	}
	return 0;
}
