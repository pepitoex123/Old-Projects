#include <iostream>

using namespace std;

int main()
{
	int x=10;
	int &y=x;
	x++;
	cout<<x<<endl;
	y++;
	cout<<x<<endl;
	return 0;
}

