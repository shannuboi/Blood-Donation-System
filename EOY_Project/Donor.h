#ifndef DONOR
#define DONOR

#include "Person.h"
#include <iostream>

class Donor : public Person
{
public:
	Donor();
	void setaddress(std::string a);
	void setcontactno(std::string c);
	BloodType GetBloodType() const;
	friend std::ostream& operator<<(std::ostream& os, const Donor& d);
private:
	std::string Address, contactNo;
	bool bloodAvailable;
};

#endif // !DONOR

