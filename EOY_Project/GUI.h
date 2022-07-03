#ifndef GUI_h
#define GUI_h

#include <string>
#include <iostream>
#include "Patient.h"
#include "Donor.h"

namespace GeneralGUI
{
	void GetInput(char* validChoices, int nChoices, char& storeTo);
	void GetInput(std::string& storeTo);
}

class PatientGUI
{
public:
	void Go();
private:
	Patient p;
	donorfilehandler dfile = donorfilehandler("Donor_data.csv");
};

class DonorGUI
{
public:
	void Go();
private:
	Donor d;
};

#endif


