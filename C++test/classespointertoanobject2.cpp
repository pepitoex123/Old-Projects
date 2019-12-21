#include <iostream>

using namespace std;

class Rectangle()
{
public:
	int lenght;
	int breadth;
	int area()
	{
		return lenght*breadth;
	}
	int perimeter()
	{
		return 2*(lenght+breadth);
	}
};

int main()
{
	Rectangle r1;
	Rectangle *ptr,*q;
	ptr=&r1;
	ptr -> lenght=25;
	ptr -> breadth=10;
	cout << ptr -> area() << endl;
	q = new Rectangle;
	q -> lenght=10;
	q -> breadth=10;
	q -> area();
}
