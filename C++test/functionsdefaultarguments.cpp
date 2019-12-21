#include <iostream>

using namespace std;

int add(int x,int y,int z=0)
{
	return x+y+z;
}
int fun(int a,int b,int c=0,int d=0)
{
	return 0;
}


int main()
{
	int c= add(2,6);
	c= add(2,8,10);
	return 0;
}
