#include "GUI.h"
#include <iostream>

int main()
{
	std::cout << "BLOOD DONATION SYSTEM\n\n";
	std::cout << "Are you an admin(a), a patient(p) or a donor(d)?\n";
	char choices[] = { 'a', 'p', 'd' };
	char input;
	GeneralGUI::GetInput(choices, sizeof(choices), input);

	AdminGUI adminGUI;
	PatientGUI patientGUI;
	DonorGUI donorGUI;

	if (input == 'a') adminGUI.Go();
	else if (input == 'p') patientGUI.Go();
	else donorGUI.Go();

	return 0;
}