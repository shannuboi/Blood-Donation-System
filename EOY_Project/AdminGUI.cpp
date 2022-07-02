#include "GUI.h"
using namespace std;

AdminGUI::AdminGUI() : password("5040") {};

bool AdminGUI::password_check()
{
	string pass;

	while (true)
	{
		GeneralGUI::GetInput(pass);
		if (pass == "quit")
		{
			return false;
		}
		else if (pass != password)
		{
			cout << "Invalid password (Type \"quit\" to Exit)\n";
		}
		else
		{
			return true;
		}
	}
}


void AdminGUI::Go()
{
	cout << "Please enter the password to access files as an admin: ";
	if (password_check())
	{
		cout << "Password check successful. You have access to files now.\n";
	}
}