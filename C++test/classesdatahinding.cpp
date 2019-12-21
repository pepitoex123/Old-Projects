#include <iostream>

using namespace std;

class Rectangle()
{
private:
	int breadth;
	int lenght;
public:
	void setLenght(int l)
	{
		if(l>=0)
		{
			lenght=l;
		}
		else
		{
			lenght=0;
		}
	}
	void setBreadth(int b)
	{
		if(b>=0)
		{
			breadth=b;
		}
		else
		{
			breadth=0;
		}
	}
	int getBreadth()
	{
		return breadth;
	}
	int getLenght()
	{
		return lenght;
	}
	int area()
	{
		return breadth*lenght;
	}
	int perimeter()
	{
		return 2*(breadth+lenght);
	}
};

void main()
{
	Rectangle r;
	r.setLenght(40);
	r.setBreadth(20);
}

