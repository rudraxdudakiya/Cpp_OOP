#include <iostream>
#include <string>
using namespace std;

// Base class Patient with virtual methods for runtime polymorphism
class Patient {
protected:
    int p_id;
    string name;
    int age;

public:
    virtual void input() {
        cout << "Patient ID: ";
        cin >> p_id;
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
    }

    virtual void display() const {
        cout << "Patient ID: " << p_id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    virtual ~Patient() {}  // Virtual destructor
};

// Base class IPD
class IPD {
protected:
    int ward_no, bed_no;
    float CPD;  // Charges per day
    string disease;

public:
    virtual void input() {
        cout << "\nDisease: ";
        cin >> disease;
        cout << "Ward No: ";
        cin >> ward_no;
        cout << "Bed No: ";
        cin >> bed_no;
        cout << "Charges per day: ";
        cin >> CPD;
    }

    virtual void display() const {
        cout << "Disease: " << disease << endl;
        cout << "Ward No: " << ward_no << endl;
        cout << "Bed No: " << bed_no << endl;
        cout << "Charges per day: " << CPD << "$" << endl;
    }

    virtual ~IPD() {}  // Virtual destructor
};

// Derived class IPD_Patient from Patient and IPD
class IPD_Patient : public Patient, public IPD {
    int dd, mm, yy;
    int days;

public:
    void input() override {
        Patient::input();
        IPD::input();
        cout << "Admit date (dd-mm-yy): ";
        cin >> dd >> mm >> yy;
        cout << "Enter total days: ";
        cin >> days;
    }

    void display() const override {
        Patient::display();
        IPD::display();
        cout << "Admit date: " << dd << "/" << mm << "/" << yy << endl;
        cout << "Total days: " << days << endl;
        cout << "Total Bill: " << days * CPD << "$" << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of patients: ";
    cin >> n;

    // Create an array of pointers to the base class Patient
    Patient **patients = new Patient*[n];

    for (int i = 0; i < n; i++) {
        patients[i] = new IPD_Patient();  // Dynamic polymorphism
        cout << "\n\nEnter the Details for Patient " << i + 1 << "\n\n";
        patients[i]->input();  // Call to virtual function
    }

    cout << "\n\nDetails of Patients:\n\n";
    for (int i = 0; i < n; i++) {
        cout << "\n\nPatient no: " << i + 1 << "\n";
        patients[i]->display();  // Call to virtual function
    }

    // Clean up memory
    for (int i = 0; i < n; i++) {
        delete patients[i];
    }
    delete[] patients;

    return 0;
}





// /*
//  * q1.cpp
//  *
//  *  Created on: 10-Oct-2024
//  *      Author: root
//  */


// //Design a class called "Vehicle" which contains appropriate datamembers.
// //Design a class "two-Wheeler" from vehicle which contains data member’s distance and mileage.
// //Use overloading techniques.
// //Assume further classes for inheritance and demonstrate the use of Multi-level inheritance for the above problem.

// #include <iostream>
// using namespace std;

// class Vehicle
// {
// protected:
// 	int resistration_no, plate_no, model_year;
// 	string Model_name, color;
// 	void inputV()
// 	{
// 		cout << "registration no. : ";
// 		cin >> resistration_no;

// 		cout << "Plate no. : ";
// 		cin >> plate_no;

// 		cout << "Year of model : ";
// 		cin >> model_year;

// 		cout << "Name of model : ";
// 		cin >> Model_name;

// 		cout << "Color : ";
// 		cin >> color;
// 	}
// };

// class Two_Wheeler : public Vehicle
// {
// protected:
// 	float distance;
// 	int mileage;
// 	string company;

// 	void inputT()
// 	{
// 		cout << "Company name : ";
// 		cin >> company;

// 		cout << "Distance that traversed : ";
// 		cin >> distance;

// 		cout << "Mileage : ";
// 		cin >> mileage;
// 	}
// };

// class bike : public Two_Wheeler
// {
// 	string type;
// public :
// 	void Input()
// 	{
// 		Vehicle::inputV();
// 		Two_Wheeler::inputT();
// 		cout << "\n\nEnter the Details of bike\n\ntype of bike (sport, classic) : ";
// 		cin >> type;
// 	}
// 	void Display()
// 	{
// 		cout << type << "\t" << resistration_no << "\t" << plate_no << "\t\t" << company << "\t\t" << model_year << "\t\t" << distance << "\t\t" << mileage << endl;
// 	}

// };

// int main()
// {
// 	int n;
// 	cout << "Enter the total number of vehicle : ";
// 	cin >> n;

// 	bike vehicle[n];

// 	for(int i=0; i<n; i++)
// 	{
// 		cout << "\n\nEnter the Details for Bike " << i+1 << "\n\n";
// 		vehicle[i].Input();
// 	}

// 	cout<<"\n\nDetails of Bike:\n\n";
// 	cout << "\n\n\t\t>> Two-Wheeler <<\n\nType\t\tResi_no\tPlate_no\tCompany\t\tModel_year\tDistance\tMilage(per hour)\n\n";
// 	for(int i=0; i<n; i++)
// 	{
// 		vehicle[i].Display();
// 	}
// 	return 0;
// }
