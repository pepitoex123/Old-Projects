#include <iostream>

using namespace std;

int main()
{
	int x,y;
	cout << "Please enter two no" << endl;
	cin >> x >> y;
	if(x>y)
	{
		cout << x << " Is greater than " << y;
	}
	else
	{
		cout << y << " Is greater than " << x;
	}
	return 0;
}
