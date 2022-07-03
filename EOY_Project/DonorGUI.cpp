#include "GUI.h"

using namespace std;

void DonorGUI::Go()
{
	string buffer;

	cout << "Please enter your name: ";
	GeneralGUI::GetInput(buffer);
	d.setname(buffer);

	cout << "Please enter your id: ";
	GeneralGUI::GetInput(buffer);
	d.setID(buffer);

	cout << "Please enter your bloodtype: ";
	d.Inputbloodtype();

	cout << "Please enter your address: ";
	GeneralGUI::GetInput(buffer);
	d.setaddress(buffer);

	cout << "Please enter your contact number: ";
	GeneralGUI::GetInput(buffer);
	d.setcontactno(buffer);

	cout << "Please enter some details about your medical report here\n";

}