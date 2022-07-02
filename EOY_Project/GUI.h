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


class AdminGUI
{
public:
	AdminGUI();
	bool password_check();
	void Go();
private:
	const std::string password;
};

class PatientGUI
{
public:
	void Go();
private:
	Patient p;

};

class DonorGUI
{
public:
	void Go();
private:
	Donor d;
};

#endif


