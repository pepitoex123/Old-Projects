#include <iostream>
using namespace std;

int main()
{
	const int small_room = 25;
	const int large_room = 35;
	const int number_small;
	const int number_large;
	const int cost;
	const int tax_cost;
	const int total_cost;
	cout << "Welcome to Uri´s Carpet Cleaning Service"<<endl;
	cout << "Charges: \n $25 per small room \n $35 per large room \n Sales tax rate is 6% \n Estimates are valid for 30 days \n";
	cout << "Please enter the number of small rooms you want to clean: ";
	cin >> number_small;
	cout << "\n Please enter the number of large rooms you want to clean: ";
	cin >> number_large;
	cost = (small_room * number_small) + (large_room * number_large);
	tax_cost = (cost*100)/6;
	total_cost = cost + tax_cost;
	cout << "=================================================================" << endl;
	cout << "The cost is " << cost << "\n The taxes applied cost "<< tax_cost << "\n The total cost is " << total_cost;
	return 0;
}
