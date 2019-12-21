#include <iostream>

using namespace std;

int main()
{
	int a=10,b=5;
	if(true)
	{
		int c=a+b;
		cout << c << endl;
	}
	// cout << c; is not possible because the c variable only exists inside the if statement, that´s the power of dynamic declaration
	if(int d=a+b;d>10)
	{
	}
	return 0;
}
