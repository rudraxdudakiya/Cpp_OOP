// Q2. Create a class Time which contains:
// -	Hours
// -	Minutes
// -	Seconds

// Write a C++ program using operator overloading for the following:

// 1. = = : To check whether two Time are same or not.
// 2.	>> : To accept 
// 3.	<< : To display the time.

#include <iostream>
using namespace std;

class Time
{
    int hours, minutes, seconds;
public:
    void operator >>(istream &in)
    {
        cout << "Hours : ";
        in >> hours;
        cout << "Minutes : ";
        in >> minutes;
        cout << "Seconds : ";
        in >> seconds;
        return ;
    }
    void operator <<(ostream &out)
    {
        out << hours << " : " <<minutes << " : " << seconds << endl;
        return ;
    }
    friend bool operator ==(Time a, Time b)
    {
        if(a.hours==b.hours && a.minutes==b.minutes && a.seconds==b.seconds)
            return true;
        return false;
    }    
};

int main()
{
    Time t;
    t>>(cin);
    t<<cout;
    Time t1;
    t1>>cin;
    t1 << cout;
    if(t1 == t)
        printf("Both times are same");
    else
        printf("Both times are different");
    return 0;
}