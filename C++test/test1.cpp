#include <iostream>

using namespace std;

int main()
{
	bool you_did_it=false;
	int guess;
	int answer=10;
	while(you_did_it == false)
	{
		std::cout << "Enter a guess: ";
		std::cin >> guess;
		std::cout << endl;
		std::cout << "You have entered " << guess << " as your guess";
		std::cout << endl;
		if (guess < answer)
		{
			std::cout << "The number you have entered is too low";
			std::cout << endl;
		}
		if (guess > answer)
		{
			std::cout << "The number you have entered is too high";
			std::cout << endl;
		}
		if (guess == answer)
		{
			std::cout << "YAYYYYYY THAT´S THE CORRECT GUESS";
			std::cout << endl;
			you_did_it = true;
		}
	}
	return 0;
}
