#include <iostream>

using namespace std;

int add(int a,int b)
{
	return a+b;
}
int add(int a,int b,int c)
{
	return a+b+c;
}

float add(float a,float b)
{
	return a+b;
}

int main()
{
	int a=25,b=15,c,d;
	c = add(a,b);
	d = add(a,b,c);
	int i=2.5f,j=3.5f,k;
	k=add(i,j);
	return 0;
}
