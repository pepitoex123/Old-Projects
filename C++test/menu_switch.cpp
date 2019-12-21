#include <iostream>

using namespace std;

int main()
{
	int option,number1,number2;
	cout << "What would you like to do?" << "1. Add\n 2.Sub\n 3.Mul\n 4.Div\n";
	cin >> option;
	cout << "Please enter two numbers";
	cin >>a>>b;
	switch(option)
	{
		case 1: int f=a+b
			cout << "The result of the add is " <<f;
			break;
		case 2: int f=a-b
			cout << "The result of the sub is " <<f;
			break;
		case 3: int f= a * b
			cout <<" The result of the mul is " <<f;
			break;
		case 4: int f= a/b
			cout <<"The result of the div is " <<f;
			break;
		default: cout << "You have entered a non-existent option";
			break;
	}
	return 0;
}
