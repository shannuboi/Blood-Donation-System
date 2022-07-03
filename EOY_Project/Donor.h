#ifndef DONOR
#define DONOR_h

#include "Person.h"
#include "MedicalReport.h"
#include "donorfilehandler.h"
#include <iostream>

class Donor : public Person
{
public:
	Donor();
	void setaddress(std::string a);
	void setcontactno(std::string c);
	void setmedrep(MedicalReport mr);
	BloodType GetBloodType() const;
	friend std::ostream& operator<<(std::ostream& os, const Donor& d);
private:
	std::string Address, contactNo;
	MedicalReport medRep;
	bool bloodAvailable;
	donorfilehandler fhandler;
};

#endif // !DONOR

