#include <iostream>

using namespace std;

int main()
{
	int A[7]={4,8,6,9,5,2,7}
	int sum=0;
	for(auto x:A)
	{
		sum += x;
		cout<<sum<<endl;
	}
	cout<<"The total sum is "<<sum;
	return 0;
}
