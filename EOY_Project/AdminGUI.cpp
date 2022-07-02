#include "GUI.h"
using namespace std;

AdminGUI::AdminGUI() : password("2646") {};

bool AdminGUI::password_check(std::string p)
{
	while (true) {
		if (p != password)
		{
			cout << "Invalid password";
			cin >> p;
			return  false;
		}
		else
		{
			return  true;
		}
	}
}


void AdminGUI::Go()
{
	string pass;
	cout << "Please enter the password to access files as an admin: ";
	cin >> pass;
	if (password_check(pass))
	{
		cout << "Password check successful. You have access to files now.";

	}

}