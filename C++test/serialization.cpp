#include <fstream>
#include <iostream>

using namespace std;

class Student
{
public:
	string name;
	int roll;
	string branch;
}

int main()
{
	Student s1;
	s1.name="John";
	s1.roll=10;
	s1.branch="CS";

	ofstream ofs("Student.txt",ios::trunc);
	ofs<<s1.name<<endl;
	ofs<<s1.roll<<endl;
	ofs<<s1.branch<<endl;

	ofs<<s1;

	return 0;
}
