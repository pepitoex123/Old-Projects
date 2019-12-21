#include <iostream>

using namespace std;

int sum(int a,int b)
{
	return a+b;
}
float sum(float a, float b)
{
	return a+b;
}
int sum(int a,int b,int c)
{
	return a+b+c;
}

int main()
{
	cout<<sum(10,20);
	cout<<sum(1.25f,2.25f);
	cout<<sum(10,20,30);
	return 0;
}
