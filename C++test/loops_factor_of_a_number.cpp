#include <iostream>

using namespace std;

int main()
{
	int n,i;
	cout << "Please enter a number to do the factorial of"<<endl;
	cin >> n;
	for(i=1;i==10;i++)
	{
		if(n%i==0)
		{
			cout<<"The number " << n << " is factor of " << i << endl;
		}
		else
		{
			cout<<"The number " << n << " is not factor of " << i << endl;
		}
	}
	cout<<"Thank you for using this program\n";
	return 0;
}
