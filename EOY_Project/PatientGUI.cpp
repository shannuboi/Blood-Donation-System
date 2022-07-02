#include "GUI.h"

using namespace std;

void PatientGUI::Go()
{
	string n;
	int i;
	string d;

	cout << "Please enter your name: ";
	GeneralGUI::GetInput(n);
	p.setname(n);

	cout << "Please enter your id: ";
	cin >> i;
	p.setID(i);

	cout << "Please enter your blood type: ";
	p.Inputbloodtype();

}