#ifndef GUI_h
#define GUI_h

namespace GeneralGUI
{
	void GetInput(char* validChoices, int nChoices, char& storeTo);
}


class AdminGUI
{
public:
	void Go();
};

class PatientGUI
{
public:
	void Go();
};

class DonorGUI
{
public:
	void Go();
};

#endif // !


