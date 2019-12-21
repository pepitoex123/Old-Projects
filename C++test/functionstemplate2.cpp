#include <iostream>

using namespace std;

template <class T>

T maximum(T a, T b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	cout<<maximum(25,100)<<endl;
	cout<<maximum(6.9f,34.12f)<<endl;
	return 0;
}
