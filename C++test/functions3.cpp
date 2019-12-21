#include <iostream>

using namespace std;

int maxim(int a,int b,int c)
{
	if(a>b && a>c)
	{
		return a;
	}
	else if(b>c)
	{
		return b;
	}
	else if(c>b)
	{
		return c;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int a=10,b=25,c=240,d;
	d = maxim(a,b,c);
	cout<<"The maximum number is "<<d<<endl;
	return 0;
}
