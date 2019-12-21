#include <iostream>

using namespace std;

class Car
{
public:
	virtual void start()
	{
		cout<<"The car has started"<<endl;
	}
	virtual void stop()
	{
		cout<<"The car has stopped"<<endl;
	}
};
class Innova:public Car
{
public:
	void start()
	{
		cout<<"Innova has started"<<endl;
	}
	void stop()
	{
		cout<<"Innova has stopped"<<endl;
	}
};
class Swift:public Car
{
	void start()
	{
		cout<<"Swift has started"<<endl;
	}
	void stop()
	{
		cout<<"Swift has stopped"<<endl;
	}
};

int main()
{
	Car *c=new Innova();
	Swift d;
	d.start();
	Car *ptr=&d;
	ptr -> start();
	c -> start();
	c -> stop();
	return 0;
}
