#include <iostream>

using namespace std;

int main()
{
	int A[6]={4,5,1,3,6,9}
	for(int x:A)
	{
		cout<<x;
	}
	// you could also do for(int &x:A) if you want to change the values of the array,the one done in this example inserts into x the value.(doesn´t modify the current value)
	return 0;
}
