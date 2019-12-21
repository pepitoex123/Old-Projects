#include <iostream>

using namespace std;

class Rectangle
{
private:
	int lenght;
	int breadth;
public:
	void setLenght(int l)
	{
		if(l>=0)
		{
			lenght=l;
		}
		else
		{
			cout<<"Something went wrong"<<endl;
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
                        cout<<"Something went wrong"<<endl;
                }
        }
	int getLenght()
	{
		return lenght;
	}
	int getBreadth()
	{
		return breadth;
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
	Rectangle r1;
	//r1.lenght=10;
	r1.setLenght(10);
	//r1.breadth=5;
	r1.setBreadth(25);
	cout<<r1.area()<<endl;
	return 0;
}
