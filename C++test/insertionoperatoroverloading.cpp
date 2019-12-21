#include <iostream>

using namespace std;

class Complex
{
private:
	int real;
	int img;
public:
friend ostream & operator<<(ostream &out,Complex &c);
}


int main()
{
	
}
