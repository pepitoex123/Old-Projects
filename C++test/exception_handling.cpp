#include <iostream>

using namespace std;

int main()
{
	int a=10,b=5,c;
	try
	{
		if(b==0)
		{
			throw 101;
		}
		else
		{
			c=a/b;
			cout<<c<<endl;
		}
	}
	catch(int e)
	{
		cout<<"Not divisible by zero: Error code "<<e<<endl;
	}
	cout<<a<<" "<<b<<endl;
	return 0;
}
