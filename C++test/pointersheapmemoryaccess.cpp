#include <iostream>

using namespace std;

int main()
{
	int A[5]={1,2,3,4,5};
	int *p;
	p=new int[5];
	A[2]=15;
	p[2]=15;
	delete []p;
	p=nullptr;
	return 0;
}

