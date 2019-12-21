#include <iostream>

using namespace std;

int main()
{
	int n,count=0,i;
	cout << "Please enter a number to check: " << endl;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
		else
		{
			cout<<"Ooopssss"<<endl;
		}
	}
	if(count==2 || count==1)
	{
		cout<<n<<" Is a prime number";
	}
	else
	{
		cout<<n<<" Is not a prime number";
	}
	return 0;
}
