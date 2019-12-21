#include <iostream>
#include <vector>
using namespace std;
/*
This challenge is about using a collection(list) of integers and allowing the user
to select option from a menu to perform operations on the list.
Your program should display a menu options to the user as follows:
P-Print numbers
A- Add a number
M- Display mean of the numbers
S- Display the smallest number
L- Display the largest number
Q- Quit

Enter your choice:
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be displayed again.


 * If the user enters "P" or "p", you should display all of the elements(ints) in the list.
 * If the list is empty you should display "[]- the list is empty"
 * If the list is not empty then all the list elements should be displayed inside square brackets separated by space.
 * If the user enters "A" or "a" then you should prompt the user for an integer to add to the list, which you will add to the list and then display it was added.
 * Duplicate entries are just OK.
To see more about this challenge, check the "Beginning C++ - From Beginner to Beyond" by Frank Mitropoulos (@FrankMitro)
*/
int main()
{
	vector<int> list;
	char option;
	bool quit=false;
	while(quit=false)
	{
		cout << "Welcome to Uri´s list management tool !!! \n -Enter P to print the numbers present in the list \n -Enter A to add a number to the list \n -Enter M to calculate the mean of all the numbers present in the list \n -S display the smallest number in the list \n -L display the largest number in the list \n -Q quit the program \n";
		cout << "Enter an option: ";
		cin >> option;
		switch(option)
		{
			case 'p':
			{
				continue;
			}
			case 'P':
			{
				if(list.size() == 0)
				{
					cout<<"\n [] - Sorry, there are no elements in the list. Please add a number !!!"
					break;
				}
				else
				{
					for(int i=0;i<list.size();i++)
					{
						if(i == 0)
						{
							cout << "\nThe numbers that are currently in the list are: " << "[";
						}
						cout<<" "<<list[i];
						if(i+1 == list.size())
						{
							cout << "]";
							break;
						}
					}
					break;
				}
			}
			case 'a':
			{
				continue;
			}
			case 'A':
			{
				int number_to_add;
				cout << "\n Please enter the integer you want to add: "
				cin >> number_to_add;
				list.push_back(number_to_add);
				for(int i=0;i<list.size();i++)
				{
					if(i==0)
					{
						cout << "["; 
					}
					cout << " " << list[i];
					if(i+1==list.size())
					{
						cout << "]";
						break;
					}
				}
				break;
			}
			case 'm':
			{
				continue;
			}
			case 'M':
			{
				int sum=0;
				int numberofelements=0;
				double mean=0.00;
				for(int i=0;i<list.size();i++)
				{
					sum += list[i];
					numberofelements += 1;
				}
				mean = sum / numberofelements;
				cout << "\n The mean of the current list of elements is " << mean << endl;
				break;
			}
			case 's':
			{
				continue;
			}
			case 'S':
			{
				if(list.size() == 0)
				{
					cout << "\n You don´t have any elements in the list..."
					break;
				}
				int smallest_number = list[0];
				for(int i=0;i<list.size();i++)
				{
					if(list[i] < list[i+1] && smallest_number < list[i+1])
					{
						 smallest_number = list[i];
					}
					else
					{
						continue;
					}
				}
				cout << "\n The smallest number present in the list is " << smallest_number;
				break;
			}
			case 'l':
			{
				continue;
			}
			case 'L':
			{
				if(list.size() == 0)
				{
					cout << "\n You don´t have any elements in the list..."
					break;
				}
				int largest_number = list[0];
				for(int i=0;i<list.size();i++)
				{
					if(largest_number >= list[i+1])
					{
						continue;
					}
					else
					{
						largest_number = list[i+1]
					}
				}
				cout << "\n The largest number present in the list is " << largest_number;
				break;
			}
			case 'q':
			{
				continue;
			}
			case 'Q':
			{
				quit=true;
				cout << "\n Thank you for using this program. I hope to see you soon !!!"
				break;
			}
			default:
			{
				cout << "\n Sorry, but the option you tried to enter is not possible, try again."
				break;
			}
		}
	}
	return 0;
}
