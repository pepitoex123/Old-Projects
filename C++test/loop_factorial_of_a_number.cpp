#include <iostream>

using namespace std;

int main()
{
	int i,n,sum=1;
	cout << "Please enter a number"<<endl;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		sum *= i
	}
	cout << "The factorial of " << n << " is " << sum;
	return 0;
}
