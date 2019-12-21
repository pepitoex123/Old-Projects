#include <iostream>

using namespace std;

int main()
{
	int A[5]={4,2,3,1,7}
	int *p=A;
	cout<<*p<<endl;
	p++;
	cout<<*p<<endl;
	p--;
	cout<<*p<<endl;
	return 0;
}
