#include <iostream>

using namespace std;

class Test()
{
private:
	int a;
	int *p;
public:
	Test(int x)
	{
		a=x;
		p = new int[a];
	}
	Test(Test &t)
	{
		a=t.a;
		p=new int[a];
	}
};

int main()
{
	test t(5);
}
