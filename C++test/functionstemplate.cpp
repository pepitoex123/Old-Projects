#include <iostream>

using namespace std;

template<class T>

T max(T x, T y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}


int main()
{
	int c = max(10,5);
	float cl = max(10.5f,6.9f);
	return 0;
}
