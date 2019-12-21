#include <iostream>

using namespace std;

class Rectangle()
{
private:
	int lenght;
	int breadth;
public:
	Rectangle(int l=0,int b=0)
	{
		setLenght(l);
		setBreadth(b);
	}
	Rectangle (Rectangle &r)
	{
		lenght= r.lenght
		breadth= r.breadth
	}
	void setLenght(int l)
	{
		if(l>=0)
		{
			lenght=l;
		}
		else
		{
			lenght=0;
			cout<<"You have done something wrong"<<endl;
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
			cout<<"You have done something wrong"<<endl;
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
		return lenght*breadth;
	}
	int perimeter()
	{
		return 2*(lenght+breadth);
	}
};

int main()
{
	// Non-Parameterized constructor
	Rectangle r1();
	// Parameterized constructor
	Rectangle r(10,5);
	// Deep Copy Constructor
	Rectangle r2(r);
}
