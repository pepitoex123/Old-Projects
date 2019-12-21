#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "Please enter your age to see if you are eligible" << endl;
	cin >> age;
	if(age < 12 || age > 50)
	{
		cout << "You are eligible for the test!!!" << endl;
	}
	else
	{
		cout << "Sorry, you are not eligible for the test!!!" << endl;
	}
	return 0;
}
