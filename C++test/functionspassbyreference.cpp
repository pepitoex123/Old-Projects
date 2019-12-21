#include <iostream>

using namespace std;


void swap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}

int main()
{
	int x=20,y=30;
	swap(x,y)
	cout<<x<<" "<<y;
	return 0;
}
