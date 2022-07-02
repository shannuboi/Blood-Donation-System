#include "GUI.h"

using namespace std;

void PatientGUI::Go()
{
	string buffer;
	int i;

	cout << "Please enter your name: ";
	GeneralGUI::GetInput(buffer);
	p.setname(buffer);

	cout << "Please enter your id: ";
	cin >> i;
	p.setID(i);

	cout << "Please enter your blood type: ";
	p.Inputbloodtype();
	
	cout << "Please enter your address: ";
	GeneralGUI::GetInput(buffer);
	p.setaddress(buffer);
	
	cout << "Please enter your contact No.: ";
	GeneralGUI::GetInput(buffer);
	p.setcontactno(buffer);

	cout << "Please enter any of your deseases: ";
	GeneralGUI::GetInput(buffer);
	p.setdisease(buffer);

	if (BloodType::DonationPossible(BloodType::Oplus(), p.GetBloodType()))
	{
		dfile.read_record_bysearch("_O+");
	}
	if (BloodType::DonationPossible(BloodType::Ominus(), p.GetBloodType()))
	{
		dfile.read_record_bysearch("_O-");
	}

	if (BloodType::DonationPossible(BloodType::Aplus(), p.GetBloodType()))
	{
		dfile.read_record_bysearch("_A+");
	}
	if (BloodType::DonationPossible(BloodType::Aminus(), p.GetBloodType()))
	{
		dfile.read_record_bysearch("_A-");
	}

	if (BloodType::DonationPossible(BloodType::Bplus(), p.GetBloodType()))
	{
		dfile.read_record_bysearch("_B+");
	}
	if (BloodType::DonationPossible(BloodType::Bminus(), p.GetBloodType()))
	{
		dfile.read_record_bysearch("_B-");
	}

	if (BloodType::DonationPossible(BloodType::ABplus(), p.GetBloodType()))
	{
		dfile.read_record_bysearch("_AB+");
	}
	if (BloodType::DonationPossible(BloodType::ABminus(), p.GetBloodType()))
	{
		dfile.read_record_bysearch("_AB-");
	}
}