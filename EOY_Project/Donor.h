#ifndef DONOR
#define DONOR

#include "Person.h"
#include "MedicalReport.h"
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
};

#endif // !DONOR

