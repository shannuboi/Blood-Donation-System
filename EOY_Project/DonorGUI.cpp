#include "GUI.h"

using namespace std;

void DonorGUI::Go()
{
	string n, a, c;
	int i;

	cout << "Please enter your name: ";
	GeneralGUI::GetInput(n);
	d.setname(n);

	cout << "Please enter your id: ";
	cin >> i;
	d.setID(i);

	cout << "Please enter your bloodtype: ";
	d.Inputbloodtype();

	cout << "Please enter your address: ";
	GeneralGUI::GetInput(a);
	d.setaddress(a);

	cout << "Please enter your contact number: ";
	GeneralGUI::GetInput(c);
	d.setcontactno(c);

	cout << "Please enter some details about your medical report here\n";
}