#include <iostream>

using namespace std;

class Rectangle
{
private:
	int lenght;
	int breadth;
public:
	Rectangle();
	Rectangle(int l,int b);
	Rectangle(Rectangle &r);
	int getLenght();
	int getBreadth();
	void setLenght(int l);
	void setBreadth(int b);
	int area();
	int perimeter();
	bool isSquare();
}

Rectangle::Rectangle()
{
	lenght=1;
	breadth=1;
}
Rectangle::Rectangle(int b=0,int l=0)
{
	lenght=l;
	breadth=b;
}
Rectangle::Rectangle(Rectangle &r)
{
	lenght=r.lenght;
	breadth=r.breadth;
}


