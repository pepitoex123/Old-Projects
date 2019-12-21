#include <iostream>

using namespace std;

int main()
{
	string name;
	cout << "Please enter your name: ";
	getline(cin,name);
	cout << "Welcome Mr/Miss" << name;
	return 0;
}
