#include <iostream>
#include <ctype>
using namespace std;

int main()
{
	string message;
	string alphabet("abcdfghijklmnñopqrstuvwxyz");
	char yes_no;
	cout << "Welcome to Uri´s basic encryption system ! \n Please enter a string to encode: "
	cin >> message;
	if(message.empty() == true)
	{
		cout << "\n The message you have entered is empty - Please enter a new message";
		return 0;
	}
	for(size_t i=0;i<message.size();i++)
	{
		if(i+1 == message.size() && alphabet[i] == 'z')
		{
			message.replace(i,i+1,alphabet[i])
		}
		else
		{
			if(isspace(message[i])
			{
				continue;
			}
			else
			{
				message.replace(i,i+1,alphabet[i+1])
			}
		}
	}
	cout << "The message encoded is " << message << endl;
	cout << "Do you want to decode the message ? Y/N " << endl;
	cin >> yes_no;
	if(yes_no == 'y' || yes_no == 'Y')
	{
		for(size_t i=0;i<message.size();i++)
		{
			if(i+1 == message.size() && alphabet[i] == 'z')
			{
				message.replace(i,1,alphabet[i])
			}
			else
			{
				if(isspace(message[i])
				{
					continue;
				}
				else
				{
					message.replace(i,1,alphabet[i])
				}
			}
		}
	}
	else
	{
		cout << "\n Thank you for testing this code !!!"
	}
	return 0;
}
