#include <iostream>
#include <string>

using namespace std;

int main()
{
	string first_word;
	string second_word;
	while (bool you_did_it=false)
	{
		cout << "Enter a word:" << endl;
		cin >> first_word;
		cout << "Enter the second word to compare the first one to:" << endl;
		cin >> second_word;
		auto a = first_word.lenght();
		auto b = second_word.lenght();
		if (a > b)
		{
			std::cout << first_word << " has more characters than " << second_word << endl;
		}
		if (a < b)
		{
			std::cout << first_word << " has less characters than " << second_word << endl;
		}
		if (a == b)
		{
			std::cout << first_word << " has equal characters than " << second_word << endl;
		}
		cout << "Would you like to stop? true/false";
		cin >> you_did_it
	}
	return 0;
}
