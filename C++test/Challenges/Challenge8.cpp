#include <iostream>
#include <vector>
using namespace std;
/* Author: Uriel Cabrera
 * Purpose: Create a banking system, that allows you to dynamically save money.
 * What are we going to use? Functions,Program Flow Control, Switch-cases, Loops, If-statements, Vectors instead of arrays, and unsigned integers.
*/
void intro();
void intro()
{
	cout << "-----\n------\n-------\n--------\n---------\n----------\n";
	cout << "Welcome to Uri´s banking system. Please choose an option: ";
	cout << "*S- If you want to check the status of your account \n *W- If you want to withdraw money from your account \n *A- If you want to add money to your account \n *M -If you want to check the movements that your account went through \n  *Q -If you want to quit the program \n"
	return void;
}
void check_account(int money);
void check_account(int money)
{
	if(!money)
	{
		cout << "\n Sorry but it seems that you haven´t added money to your account";
		return void;
	}
	else
	{
		cout << "\n The amount of money that is currently in your account is: " << money;
		return void;
	}
}
void withdraw_money(int withdraw_amount,int &money,std::vector<int> movements);
void withdraw_money(int withdraw_amount,int &money,std::vector<int> movements)
{
	money -= withdraw_amount;
	movements.push_back(-withdraw_amount);
	cout << "\n Your balance is " << money;
	cout << "\n We withdrawed " << withdraw_amount << " from your account.";
	return void;
}
int add_money(int amount,int money,std::vector<int> movements);
int add_money(int amount,int money,std::vector<int> movements)
{
	money += amount;
	movements.push_back(amount);
	cout << "Your balance is " << money;
	return money;
}
void read_movements(std::vector<int> movements);
void read_movements(std::vector<int> movements)
{
	cout << "\n Your movements are: "
	for(int i=0;i<movements.size();i++)
	{
		cout << movements.at(i) << endl;
	}
	return void;
}
int main(void)
{
	bool quit_program = false;
	char option;
	vector <int> movements;
	unsigned int money;
	int withdraw_amount;
	int add_amount;
	while(quit_program != true)
	{
		intro();
		cin >> option;
		switch(option):
		{
			case 's'
			{
				continue;
			}
			case 'S'
			{
				check_account(money);
				break;
			}
			case 'w'
			{
				continue;
			}
			case 'W'
			{
				cout << "\n Please enter the amount of money that you want to withdraw from your account: "
				cin >> withdraw_amount;
				withdraw_money(withdraw_amount,money,movements);
				break;
			}
			case 'a'
			{
				continue;
			}
			case 'A'
			{
				cout << "\n Please enter an amount to add to your balance: ";
				cin >> add_amount;
				money = add_money(add_amount,money,movements);
				break;
			}
			case 'm'
			{
				continue;
			}
			case 'M'
			{
				read_movements(movements);
				break;
			}
			case 'q'
			{
				continue;
			}
			case 'Q'
			{
				cout << "Thank you for using this program! ";
				quit_program = true;
				break;
			}
			default
			{
				cout << "\n This is not a valid option, please try again...";
				break;
			}
		}
	}
	return 0;
}
