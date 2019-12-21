#include <iostream>

using namespace std;

int division(int x,int y)
{
	if(y==0)
	{
		throw 101;
	}
	else
	{
		return x/y;
	}
}


int main()
{
	int a=25,b=10,c;
	try
	{
		c = division(a,b);
		cout<<c<<endl;
	}
	catch(int e)
	{
		cout<<"An error has ocurred. Code number "<<e;
	}
	cout<<"Bye!!!"<<endl;
	return 0;
}
