#include <iostream>

using namespace std;

int main()
{
	int A[7]={4,8,6,9,5,2,7};
	int max_value=A[0];
	for(int i=1;i<7;i++)
	{
		if(A[i]<max_value)
		{
			cout<<"Max keeps up";
		}
		else if(A[i]==max_value)
		{
			cout<<A[i]<<max_value;
		}
		else
		{
			max_value=A[i];
		}
	}
	cout<<max_value<<" Is the maximum value present inside the array "<<endl;
	return 0;
}
