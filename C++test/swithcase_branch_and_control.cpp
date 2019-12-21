#include <iostream>

using namespace std;

int main()
{
	int day;
	cout<<"Enter a day no please"<<endl;
	cin>>day;
	switch(day)
	{
		Case 1: cout << "Monday";
			break;
		Case 2: cout << "Tuesday";
			break;
		Case 3: cout << "Wednesday";
			break;
		Case 4: cout << "Thursday";
			break;
		Case 5: cout << "Friday";
			break;
		Default: cout<<"Invalid day";
			break;
	}
	return 0;
}
