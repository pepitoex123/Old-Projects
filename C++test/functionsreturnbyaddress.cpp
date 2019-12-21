#include <iostream>

using namespace std;

int & funreference(int x)
{
	return x;
}

int * fun(int size)
{
	int *p=new int[size];
	for(int i=0;i<10;i++)
	{
		p[i]=i+1;
	}
	cout<<p<<endl;
	return p;
}
int main()
{
	int b=25;
	int *q= fun(9);
	cout<<q<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<q[i];
	}
	funreference(b)=10;
	cout<<b;
}
