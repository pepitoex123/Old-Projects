#include <iostream>

using namespace std;

int main()
{
	int hour;
	cout << "Please enter an hour" << endl;
	cin >> hour;
	if(hour >= 9 && hour <= 18)
	{
		cout << "You are in a working hour" << endl;
	}
	else
	{
		cout << "You are in a leisure hour" << endl;
	}
	return 0;
}
