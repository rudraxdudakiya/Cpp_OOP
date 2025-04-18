/*
 * q4.cpp
 *
 *  Created on: 30-Aug-2024
 *      Author: root
 */




#include<iostream>
#include <iomanip>

using namespace std;

class Employee {
public:
    int code;
    string designation;
    string name;
    string dept;
    double bsalary;
    float da,hra;
	int calculated_day=0,calculated_month=0,calculated_year=0;
    struct date
    {
        int d,m,y;
    }DOB,DOJ,CD;
    int validate(int d,int m,int y)
    {
        if(y>1000 && y<9999)
        {
            if((m==1||m==3||m==5||m==7||m==8||m==10||m==12) && (d>0&&d<=31))
            {
                return 1;
            }
            else if((m==4||m==6||m==9||m==11) && (d>0&&d<=30))
            {
                return 1;
            }
            else if(m==2)
            {
                if((y%4==0) && (d>0&&d<=29))
                {
                    return 1;
                }
                else if(d>0 &&  d<=28)
                {
                    return 1;
                }
            }
        }
        return 0;
    }
    void input()
    {
        cout<< "\t\t**Getting Input of Employee From User**\n\n";
        cout<< "Enter the code :";
        cin>> code;
        cout<< "Enter the name of Employee :";
        cin>> name;
        cout<< "Enter the designation of Employee :";
        cin>> designation;
        do{
            cout<< "Enter the date of birth (dd-mm-yyyy) of employee :";
            cin>>DOB.d>>DOB.m>>DOB.y;
        }while(!validate(DOB.d,DOB.m,DOB.y));
        do{
            cout<< "Enter the date of joining (dd-mm-yy) :";
            cin>>DOJ.d>>DOJ.m>>DOJ.y;
        }while(!validate(DOJ.d,DOJ.m,DOJ.y));
        cout<< "Enter the basic salary of employee :";
        cin>> bsalary;
        cout<< "Enter the Department name :";
        cin>> dept;
    }
    void display()
    {
        cout <<code<<"\t"<<name<<"\t"<<designation<<"\t"<<DOB.d<<"-"<<DOB.m<<"-"<<DOB.y<<"\t"<<DOJ.d<<"-"<<DOJ.m<<"-"<<DOJ.y<<"\t"<<dept<<"\t"<<bsalary<<"\n";
    }
    void totalSalary()
    {
        if(bsalary<30000)
        {
            da = bsalary*0.6;
            hra = bsalary*0.2;
            bsalary = bsalary+da+hra;
        }
        else if(bsalary<45000)
        {
            da = bsalary*0.7;
            hra = bsalary*0.3;
            bsalary = bsalary+da+hra;
        }
        else if(bsalary>45000)
        {
            da = bsalary*0.85;
            hra = bsalary*0.4;
            bsalary = bsalary+da+hra;
        }
    }
    void calculateExp()
    {
        CDinput:
        do {
            cout<< "Enter the current date (dd-mm-yy) :";
            cin>>CD.d>>CD.m>>CD.y;
        } while(!validate(CD.d,CD.m,CD.y));
        if(CD.y<DOJ.y)
        {
            cout<<"Joining year is greater than current year\n";
            goto CDinput;
        }

//	int calculated_day=0,calculated_month=0,calculated_year=0;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(CD.y%4==0)
		month[1]=29;
	if(DOJ.d > CD.d)
	{
		int i=month[DOJ.m-1];
		CD.d=CD.d+i;
		CD.m=CD.m-1;
	}
	if(DOJ.m > CD.m)
	{
		CD.y=CD.y-1;
		CD.m=CD.m+12;
	}
	calculated_day=CD.d-DOJ.d;
	calculated_month=CD.m-DOJ.m;
	calculated_year=CD.y-DOJ.y;

	cout<<"year : " <<calculated_year<<" month : "<<calculated_month<<" day :"<<calculated_day;
    }
    void checkExp()
    {
    	if(calculated_year>5&&calculated_month>0)
    	{
    		cout<<"\nEmployee working more than 5 years\n";
    		display();
    	}
    }
};

int main()
{
    int size,count=0,flag=0,ch;
    cout<<"enter the size of employee :";
    cin>>size;
    Employee e[size];

    do {
    cout<<"\n\n1. Input\n";
    cout<<"2. Display\n";
    cout<<"3. Total salary\n";
    cout<<"4. Sales dept employee\n";
    cout<<"5. Experience of Employee\n";
    cout<<"6. Employee with more than 5 years of experience\n";
    cout<<"7. Exit\n choose:";
    cin>>ch;
    switch(ch)
    {
        case 1:
        if(count>size-1)
        {
            cout<<"\nSize is Full\n\n";
            break;
        }
            e[count].input();
            count++;
            break;
        case 2:
        display:
        cout<<"Code\tName\tPosition\tDOB\tDOJ\tDept\tSalary\n\n";
            for(int i=0;i<count;i++)
            {
                e[i].display();
            }
            break;
        case 3:
            for(int i=0;i<count;i++)
            {
                e[i].totalSalary();
            }
            goto display;
            break;
        case 4:
            for(int i=0;i<count;i++)
            {
                if("sales" == e[i].dept||"Sales" == e[i].dept)
                {
                    e[i].display();
                    flag=1;
                }
            }
            if(flag==0)
            {
                cout<<"\nThere are not any employee working in sales department\n\n";
            }
            break;
        case 5:
            for(int i=0;i<count;i++)
            {
                e[i].display();
                cout<<endl;
                e[i].calculateExp();
                cout<<endl;
            }
            break;
        case 6:
        	for(int i=0;i<count;i++)
        	{
                e[i].calculateExp();
        		e[i].checkExp();
        	}
        	break;
        case 7:
        	cout<<"Thank you!";
        	break;
        default:
        	cout<<"Invalid Input."<<endl;
    }
    } while(ch != 7);
    return 0;
}
