#include <iostream>
#include <vector>
using namespace std;

int *apply_all(const int *array1,const int *array2);
int *apply_all(const int *array1,const int *array2)
{
	
	int *ptr = nullptr;
	*ptr = new int[]
}

int main()
{
	int size_farray;
	int size_sarray;
	cout << "\n Welcome to this program, please enter the size of the first array: ";
	cin >> size_farray;
	cout << "\n Now enter the size of the second array: ";
	cin >> size_sarray;
	cout << "\n Now please enter the values that you want the first array to store(int values only): "
	for(int i=0;i<size_farray;i++)
	{
		int value_entered=0;
		cin >> value_entered;
		if(i == 0)
		{
			int first_array[size_farray];
		}
		first_array[i] = value_entered;
		cout << "\n You have entered as value " << i << "of the array " << value_entered << endl;
	}
	for(int i=0;i<size_sarray;i++)
	{
		int value_entered=0;
		cin >> value_entered;
		if(i == 0)
		{
			int second_array[size_sarray];
		}
		second_array[i] = value_entered;
		cout << "\n You have entered as value " << i << "of the array " << value_entered << endl;
	}
	
	return 0;
}
