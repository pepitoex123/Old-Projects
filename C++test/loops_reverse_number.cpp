#include <iostream>

using namespace std;

int main()
{
	int n,r,rev=0;
	cout<<"Please enter a number to reverse"<<endl;
	cin>>n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
	}
	cout<<"The reverse of "<<n<<" is "<<rev<<endl;
	return 0;
}
