#include <iostream>

using namespace std;

class Base
{
public:
	int a;
	void display()
	{
		cout<<"Display of Base "<<a<<endl;
	}
};
class Derived:public Base
{
public:
	void show()
	{
		cout<<"Show of Derived"<<endl;
	}
};

int main()
{
	Base b;
	Derived c;
	b.display();
	c.display();
	c.show();
	c.a=100;
	return 0;
}
