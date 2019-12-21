#include <iostream>
using namespace std;
/*
For this program I will be using Argentinian pesos, Dollars, Euros and Pounds.
Write a program that asks the user to enter the following:
A variable representing the number of currency that he has(Argentine Pesos)
You may assume that the number of currency entered is greater than or equal to zero
The program should then display how to provide that change to the user.
This challenge is based on the fourth challenge given in the course: "Beginning C++ Programming - From Beginner to Beyond"
In this program I will take into account that:
1 Argentine Peso = 0.17 USD
1 Argentine Peso = 0.015 Euro
1 Argentine Peso = 0.013 Pounds
Ok, let the challenge start !!!
*/
int main()
{
	bool try_again = true;
	while(try_again == true){
		char yes_no;
		float currency_amount = 0;
		float dollars;
		float euros;
		float pounds;
		cout <<"Welcome to Uri´s currency conversor!!!\n ======================================== \n Please enter the number of argentine pesos: ";
		cin >> currency_amount;
		if(currency_amount <= 0)
		{
			cout << "\n Please enter a valid amount \n Program exiting...";
			return 0;
		}
		else
		{
			cout << "\n Great !!! Starting the conversion... Please wait \n";
		}
		dollars = currency_amount * 0.17F;
		euros = currency_amount * 0.015F;
		pounds = currency_amount * 0.013F;
		cout << "===============================================================" << endl;
		cout << "The amount of argentine pesos that you entered is: " << currency_amount << endl;
		cout << "The amount of dollars that you have is: " << dollars << endl;
		cout << "The amount of euros that you have is: " << euros << endl;
		cout << "The amount of pounds that you have is: " << pounds << endl;
		cout << "\n Thank you for using this program, do you wish to use it again ? Y/N" << endl;
		cin >> yes_no;
		if(yes_no == 'Y' || yes_no == 'y')
		{
			continue;
		}
		else
		{
			try_again = false;
		}
	return 0;}
}
