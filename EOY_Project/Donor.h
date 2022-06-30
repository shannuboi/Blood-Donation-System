#ifndef DONOR
#define DONOR

#include "Person.h"
#include <iostream>

class Donor : private Person
{
public:
	Donor();
	BloodType GetBloodType() const;
	friend std::ostream& operator<<(std::ostream& os, const Donor& d);
private:
	std::string Address, contactNo;
	bool bloodAvailable;
};

#endif // !DONOR

