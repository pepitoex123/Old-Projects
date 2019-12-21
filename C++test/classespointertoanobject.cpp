#include <iostream>

using namespace std;

class Rectangle()
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


int main()
{
	Rectangle r;
	Rectangle *p;
	p=&r;
	r.lenght = 10;
	p -> lenght=10;
	p -> breadth=5;
	cout << p -> area();
	Rectangle *q;
	q = new Rectangle;
	cout << q -> area();
	return 0;
}
