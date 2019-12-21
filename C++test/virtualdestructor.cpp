#include <iostream>

using namespace std;

class basiCar
{
private:
	int speed;
public:
	basiCar()
	{
		cout<<"Amazing basic car created"<<endl;
	}
	virtual ~basiCar()
	{
		cout<<"Basic Car Destroyed"<<endl;
	}
}
class advCar:public basiCar
{
public:
	advCar()
	{
		cout<<"Advanced Car created"<<endl;
	}
	~advCar()
	{
		cout<<"Advanced car destroyed"<<endl;
	}
}

int main()
{
	basiCar *ptr= new advCar();
	delete ptr;
	return 0;
}
