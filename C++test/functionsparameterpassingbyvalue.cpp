// Author: Pepitoex123
// Subject: Pass value to function
// Theme: Basically, when we pass arguments to a function, we pass some actual parameters(x,y) that take the formal parameters(a,b)
#include <iostream>

using namespace std;

void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{
	int x=10,y=20;
	swap(x,y);
	cout<<x<<" "<<y<<endl;
	return 0;
}
