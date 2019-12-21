#include <iostream>

using namespace std;

void swapbyaddress(int *a,int *b)
{
	int temp;
	*a=temp;
	*a=*b;
	*b=temp;
}

void swapbyreference(int &a,int &b)
{
	int temp;
	a=temp;
	a=b;
	b=temp;
}

int main()
{
	int x=20,y=30;
	cout<<x<<" "<<y<<endl;
	swapbyaddress(&x,&y);
	cout<<x<<" "<<y<<endl;
	swapbyreference(x,y);
	cout<<x<<" "<<y<<endl;
	return 0;
}
