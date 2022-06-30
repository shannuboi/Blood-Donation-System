#include "Person.h"

Person::Person()
	:
	name("lol"), ID(123), bloodtype(BloodType::Group::B, BloodType::RHfactor::plus)
{
}

std::string Person::GetName() const
{
	return name;
}

int Person::GetID() const
{
	return ID;
}

BloodType Person::GetBloodType() const
{
	return bloodtype;
}

std::ostream& operator << (std::ostream& os, const Person &p)
{
	os << "Name: " << p.name;
	os << ", ID: " << p.ID;
	os << ", Blood Type " << p.bloodtype;

	return os;
}
