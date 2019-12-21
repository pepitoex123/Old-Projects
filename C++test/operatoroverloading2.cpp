#include <iostream>

using namespace std;

class Complex
{
private:
	int real;
	int img;
public:
	Complex(int r=0,int i=0)
	{
		real=r;
		img=i;
	}
	Complex(Complex &r)
	{
		real=r.real;
		img=r.img;
	}
	Complex operator+(Complex x)
	{
		Complex temp;
		temp.real = real + x.real;
		temp.img = img + x.img;
		return temp;
	}
};

int main()
{
	Complex c1(5,8);
	Complex c2(7,8);
	Complex c3;
	c3 = c1 + c2;
}
