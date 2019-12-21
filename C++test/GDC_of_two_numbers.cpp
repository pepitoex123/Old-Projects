#include <iostream>

using namespace std;

int main()
{
	int noOne,noTwo,result;
	cout<<"Please enter two numbers to compare"<<endl;
	cin>>noOne>>noTwo;
	while(noOne!=noTwo)
	{
		if(noOne>noTwo)
		{
			noTwo=noTwo-noOne
		}
		else if(noOne<noTwo)
		{
			noOne=noOne-noTwo
		}
	}
	if(noOne==noTwo)
	{
		result=noOne
		cout<<"The GDC of the two numbers is "<<result<<endl;
	}
	else
	{
		cout<<"An unexpected error ocurred,no GDC found"<<endl;
	}
	return 0;
}
