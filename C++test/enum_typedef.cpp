#include <iostream>

using namespace std;

enum day {mon=1,tue,wed,thurs=10,fri,sat,sun}
enum dept {cs=1,it,ec,mech};
typedef int marks;
int main()
{
	//m1 and m2 are for storing marks. We don´t need commentaries thanks to typedef
	marks m1,m2;
	m1=50;
	m2=90;
	day d;
	d=mon;
	cout << "Simple demonstration of typedef and enum!!!" << endl;
	cout << d << endl;
	return 0;
}
