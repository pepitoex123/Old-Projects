#include <iostream>

using namespace std;

int main()
{
	int sum,counter,i;
	cout << "Please enter a number to do the equation "<<endl;
	cin >> counter;
	while(i<=counter)
	{
		sum += i;
		cout<<"Your sum right now is " << sum << " After " <<i<<endl;
		i++;
	}
	cout << " Your final sum is " << sum << endl;
	return 0;
}
