#include "Donor.h"

Donor::Donor()
	:
	Address("nust"), contactNo("123"), bloodAvailable(true)
{
}

BloodType Donor::GetBloodType() const
{
	return Person::GetBloodType();
}

void Donor::setaddress(std::string a)
{
	Address = a;
}

void Donor::setcontactno(std::string c)
{
	contactNo = c;
}

void Donor::setmedrep(MedicalReport mr)
{
	medRep = mr;
}

std::ostream & operator<<(std::ostream & os, const Donor & d)
{
	const Person * p = &d;
	os << *p
		<< ", Address: " << d.Address
		<< ", Contact no: " << d.contactNo
		<< ", Blood available: ";
	if (d.bloodAvailable) os << "Yes";
	else os << "No";

	return os;
}
