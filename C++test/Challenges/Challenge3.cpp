#include <iostream>
#include <vector>
using namespace std;
/*
Challenge 3
Write a C++ program as follows:
Declare 2 empty vectors of integers named vector1 and vector2 respectively.
Add 10 and 20 to vector1 dynamically.
Display the elements in vector1 using the at() method as well as its size using the size() method.
Add 100 and 200 to vector2 dynamically.
Display the elements in vector2 using the array method.
Declare an empty 2d vector called vector_2d
Add vector1 to vector_2d 
Add vector2 to vector_2d 
Display the elements in vector_2d using the at() method.
Change vector1.at(0) to 1000.
*/
int main()
{
	vector <int> vector1;
	vector <int> vector2;
	vector1.push_back(10);
	vector1.push_back(20);
	for(int i=0;i<2;i++)
	{
		if(i==0)
		{
			cout << "The size of vector1 is " << vector1.size() << endl;
		}
		cout << vector1.at(i) << endl;
	}
	vector2.push_back(100);
	vector2.push_back(200);
	for(int i=0;i<2;i++)
	{
		std::cout << "One of the two integers stored in vector2 is " << vector2[i] << endl;
	}
	vector<vector<int>> vector_2d;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
	vector1.at(0) = 1000;
	return 0;
}
