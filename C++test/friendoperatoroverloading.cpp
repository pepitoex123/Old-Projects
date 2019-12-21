#include <iostream>

using namespace std;

class Complex
{
private:
	int real;
	int img;
public:
	Complex(int r=0,int img=0)
	{
		real=r;
		this -> img = img;
	}
	Complex(Complex &r)
	{
		real=r.real;
		img=r.img;
	}
	void display()
	{
		cout<<real<<"+i"<<img;
	}
	friend Complex operator+(Complex c1,Complex c2)
}
Complex operator+(complex c1,complex c2)
{
	Complex t;
	t.real = c1.real + c2.real;
	t.img = c1.img + c2.img;
	return t;
}
int main()
{
	Complex c1(3,7),c2(3,5),c3;
	c3 = c1 + c2;
}
