#include <iostream>

using namespace std;

int main()
{
	int A[10],n=10,key,i;
	cout<<"Please enter numbers for the array"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>A[i];
	}
	cout<<"Please enter a key"<<endl;
	cin>>key;
	for(int j=0;j<10;i++)
	{
		if(key==A[i])
		{
			cout<<"Key found!!! index of "<<j<<endl;
			return 0;
		}
	}
	cout<<"Key was not found"<<endl;
	return 0;
}
