#include <iostream>

using namespace std;

int main()
{
	int n,m,sum=0,r;
	cout<<"Please enter a number to check if it´s an armstrong number or not"<<endl;
	cin >> n;
	m = n;
	while(n>0)
	{
		r=n%10;
		n/=10;
		sum+=(r*r*r)
	}
	if(sum==n)
	{
		cout<<"YAYYYY "<<n<<" is an armstrong number!!!"<<endl;
	}
	else
	{
		cout<<"T_T "<<n<<" is not an armstrong number!!!"<<endl;
	}
	return 0;
}
