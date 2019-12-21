#include <iostream>

using namespace std;

int main()
{
	int n,i,sum=0;
	cout << "Please enter a number to calculate it´s perfect number"<<endl;
	cin >> n
	for(i=1;i<=10;i++)
	{
		if(n%i==0)
		{
			sum += i
		}
		else
		{
			cout<<"The module of " << n << " and " << i << " is not equal to zero\n"
		}
	}
	cout<<"The perfect number is " << sum << endl;
	return 0;
}
