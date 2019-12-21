#include <iostream>

using namespace std;

class rectangle
{
public:
	int lenght;
	int breadth;
	int area()
	{
		return lenght * breadth;
	}
	int perimeter()
	{
		return 2*(lenght+breadth);
	}
};


void main()
{
	Rectangle r1,r2;
	r1.lenght=10;
	r1.breadth=5;
	cout<<r1.area();
	r2.lenght=15;
	r2.breadth=10;
	cout<<r2.area();
	return 0;
}
