#include "BloodType.h"
#include "GUI.h"

BloodType::BloodType(Group group, RHfactor rhfactor)
	:
	group(group),
	rhfactor(rhfactor)
{
}

bool BloodType::DonationPossible(BloodType donor, BloodType recp)
{
	switch (donor.group)
	{
	case Group::O:
		if (donor.rhfactor == RHfactor::plus)
		{
			if (recp.rhfactor == RHfactor::plus)
			{
				// Donor: O+
				// Recipient: O+, A+, B+ or AB+
				return true;
			}
		}
		else
		{
			// Donor: O-
			// Recipient: Any
			return true;
		}
		break;

	case Group::A:
		if (recp.group == Group::A || recp.group == Group::AB)
		{
			if (donor.rhfactor == RHfactor::plus)
			{
				if (recp.rhfactor == RHfactor::plus)
				{
					// Donor: A+
					// Recipient: A+ or AB+
					return true;
				}
			}
			else
			{
				// Donor: A-
				// Reci[ient: A+, A-, AB+, AB-
				return true;
			}
		}
		break;

	case Group::B:
		if (recp.group == Group::B || recp.group == Group::AB)
		{
			if (donor.rhfactor == RHfactor::plus)
			{
				if (recp.rhfactor == RHfactor::plus)
				{
					// Donor: B+
					// Recipient: B+ or AB+
					return true;
				}
				else
				{
					// Donor: B-
					// Recipient: B+, B-, Ab+, Ab-
					return true;
				}
			}
		}
		break;

	case Group::AB:
		if (recp.group == Group::AB)
		{
			if (donor.rhfactor == RHfactor::plus)
			{
				if (recp.rhfactor == RHfactor::plus)
				{
					// Donor: AB+
					// Recipient: AB+
					return true;
				}
			}
			else
			{
				// Donor: AB-
				// Recipient: AB+ or AB-
				return true;
			}
		}
		break;
	}

	return false;
}

std::ostream & operator<<(std::ostream & os, const BloodType & b)
{
	os << ", Blood type: "; 
	switch (b.group)
	{
	case BloodType::Group::O:
		os << "O";
		break;

	case BloodType::Group::A:
		os << "A";
		break;

	case BloodType::Group::B:
		os << "B";
		break;
	
	case BloodType::Group::AB:
		os << "AB";
		break;
	}

	if (b.rhfactor == BloodType::RHfactor::plus) os << "+";
	else os << "-";

	return os;
}

std::istream & operator>>(std::istream & is, BloodType & b)
{
	std::string buff;
	std::string validChoices[] =
	{ "O+", "O-", "A+", "A-", "B+", "B-", "AB+", "AB-" };

	bool Invalid = true;

	while (Invalid)
	{
		is >> buff;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		for (int i = 0; i < sizeof(validChoices); i++)
		{
			if (buff == validChoices[i]) Invalid = false;
		}

		if (Invalid)
		{
			std::cout << "Please Enter a valid input\n";
		}
	}
	
	if (buff == "O+") { b.group = BloodType::Group::O; b.rhfactor = BloodType::RHfactor::plus; }
	else if (buff == "O-") { b.group = BloodType::Group::O; b.rhfactor = BloodType::RHfactor::minus; }
	else if (buff == "A+") { b.group = BloodType::Group::A; b.rhfactor = BloodType::RHfactor::plus; }
	else if (buff == "A-") { b.group = BloodType::Group::A; b.rhfactor = BloodType::RHfactor::minus; }
	else if (buff == "B+") { b.group = BloodType::Group::B; b.rhfactor = BloodType::RHfactor::plus; }
	else if (buff == "B-") { b.group = BloodType::Group::B; b.rhfactor = BloodType::RHfactor::minus; }
	else if (buff == "AB+") { b.group = BloodType::Group::AB; b.rhfactor = BloodType::RHfactor::plus; }
	else if (buff == "AB-") { b.group = BloodType::Group::AB; b.rhfactor = BloodType::RHfactor::minus; }

	return is;
}
