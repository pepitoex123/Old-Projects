#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	cout << "Please enter three numbers" << endl;
	cin >> a >> b >> c;
	if(a > b && a > c)
		cout << "The maximum number is " << a <<  endl;
	else
	{
		if(b>c)
		{
			cout << "The maximum number is " << b;
		}
		else
		{
			cout << "The maximum number is " << c;
		}
	}
	return 0;
}
