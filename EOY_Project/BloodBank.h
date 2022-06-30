#ifndef BLOODBANK
#define BLOODBANK

#include <string>
#include <vector>
#include "Donor.h"

class BloodBank
{
public:
	BloodBank();
	void DisplayAllDonorData() const;
private:
	std::string name, address, contactNo;
	std::vector<Donor> donors;
};

#endif // !BLOODBANK
