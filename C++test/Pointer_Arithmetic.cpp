#include <iostream>

using namespace std;

int main()
{
	int A[5]={1,4,5,2,1};
	int *p=A;
	int *q=&A[3];
	p++;
	p--;
	p=p+2;
	p=p-2;
	int d=(q-p)/2;
	//This last statement stores in d the distance or offset between q and p
	return 0;
}
