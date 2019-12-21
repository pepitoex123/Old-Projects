#include <fstream>

using namespace std;

int main()
{
	ofstream outfile("My.txt",ios::trunc);
	//ios::app will append information to the .txt if it has some info
	outfile<<"Hello"<<endl;
	outfile<<25<<endl;
	outfile.close();
	return 0;
}
