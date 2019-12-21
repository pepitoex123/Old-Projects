#include <iostream>

using namespace std;

class Rectangle
{
private:
	int lenght;
	int breadth;
public:
	Rectangle(int l=0,int b=0);
	int getLenght();
	int getBreadth();
	void setLenght(int l);
	void setBreadth(int b);
	int area();
	int perimeter();
}
Rectangle::Rectangle(int l=0,int b=0)
{
	lenght=l;
	breadth=b;
}

class Cuboid:public Rectangle
{
private:
	int height;
public:
	Cuboid(int l=0,int b=0,int h=0)
	{
		height=h;
		setLenght(l);
		setBreadth(b);
	}
	int getHeight();
	void setHeight(int h);
	int Volume()
	{
		return getLenght()*getBreadth()*height;
	}
}


int main()
{
	Cuboid c(10,5,3);
	return 0;
}
