#include <iostream>

using namespace std;

int sum(int a,int b,int c=0)
{
	return a+b+c;
}

int max(int a, int b, int c=0)
{
	return a>b && a>c ? a:(b>c?b:c);
}

int main()
{
	cout<<sum(10,5);
	cout<<sum(10,8,20);
	cout<<max(10,20);
	return 0;
}
