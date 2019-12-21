#include <iostream>

using namespace std;

void display()
{
	cout<<"Hello";
}
int add(int y,int x)
{
	int z;
	z=x+y;
	return z;
}


void main()
{
	int a=10,b=5,c;
	display();
	c = add(a,b);
	cout<<"Sum is "<<c<<endl;
	return 0;
}
