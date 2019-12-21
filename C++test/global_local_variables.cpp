#include <iostream>

using namespace std;

int global=20;

void fun()
{
	int a=10;
	a++;
	{
		int a=25;
		a++;
		cout<<a<<" "<<global<<endl;
	}
	global++;
	cout<<a<<" "<<g<<endl;
}
int main()
{
	fun();
	cout<<global<<endl;
	return 0;
}
