#include <iostream>

using namespace std;

int main()
{
	int n,r,count=1;
	cout << " Please enter a number to process "<<endl;
	cin >> n;
	while(n>0)
	{
		r=n%10
		n/=10
		cout<<"The digit number "<<count<<" From right to left is "<<r<<endl;
		count++
	}
	return 0;
}
