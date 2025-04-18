/*
// CPP program to illustrate
// when not using static keyword
#include <iostream>
using namespace std;

class myclass {
	int i;

public:
	myclass()
	{
		i = 0;
		cout << "Inside Constructor\n";
	}
	~myclass()
	{
		cout << "Inside Destructor\n";
	}
};

int main()
{
	int x = 0;
	if (x == 0) {
		myclass obj;
	}
	cout << "End of main\n";
}
*/
// CPP program to illustrate
// class objects as static
#include <iostream>
using namespace std;

class myclass {
	int i = 0;

public:
	myclass()
	{
		i = 0;
		cout << "Inside Constructor\n";
	}

	~myclass()
	{
		cout << "Inside Destructor\n";
	}
};

int main()
{
	int x = 0;
	if (x == 0) {
		static myclass obj;
	}
	cout << "End of main\n";
}
