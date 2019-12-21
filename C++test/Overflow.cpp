#include <iostream>

using namespace std;

int main()
{
	char x=127;
	cout << "Overflow Demonstration" << endl;
	x++;
	cout << (int)x << endl;
	return 0;
}

