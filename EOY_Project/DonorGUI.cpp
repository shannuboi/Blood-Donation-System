#include "GUI.h"

using namespace std;

void DonorGUI::Go()
{
	string buffer;
	MedicalReport temp;
	int _weight, _age, _haem;

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
	cout << "Please enter your age: ";
	cin >> _age;
	temp.SetAge(_age);
	cout << "Please enter your body weight: ";
	cin >> _weight;
	temp.SetWeight(_weight);
	cout << "Please enter your haemoglobin level: ";
	cin >> _haem;
	temp.SetHaemLev(_haem);
	d.setmedrep(temp);
	if (temp.Eligible()) {
		cout << "Your medical report has been received. You are eligible to donate blood.\n";

		cout << "Here is the list of Blood Banks you can donate to:\n";
		//Display blood banks

		cout << "/nEnter the name of the bank you'd like to donot to: ";
		GeneralGUI::GetInput(buffer);
		cout << "You have chosen" << buffer << "\nYour data will be stored with us. Thank you for donating blood!";

	}
	else
	{
			cout << "Sorry but you cannot donate blood as you did not meet the eligibility criteria.";
	}
	
}