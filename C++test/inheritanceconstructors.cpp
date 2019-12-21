#include <iostream>

using namespace std;

class Base
{
public:
	Base()
	{
		cout<<"Default constructor of base"<<endl;
	}
	Base(int x)
	{
		cout<<"Param constructor of base "<<x<<endl;
	}
};
class Derived:public Base
{
	Derived()
	{
		cout<<"Default constructor of Derived"<<endl;
	}
	Derived(int y)
	{
		cout<<"Param constructor of Derived"<<y<<endl;
	}
	Derived(int x,int a):Base(x)
	{
		cout<<"Param of Derived"<<a;
	}
};

int main()
{
	Derived d(20,10);
	return 0;
}
