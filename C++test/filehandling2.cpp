#include <fstream>
#include <iostream>


using namespace std;

int main()
{
	ifstream infile;
	infile.open("My.txt");
	/* There are modes for reading-only(ios::in) and writing-only(ios::out) */
	/* if(!infile.is_open())
	{
		cout<<"File cannot be opened";
	} */
	string str;
	int x;
	infile >> str;
	infile >> x;
	cout << str << " " << x;
	if(infile.eof())
	{
		cout << "End of file reached";
	}
	infile.close();
	return 0;
}
