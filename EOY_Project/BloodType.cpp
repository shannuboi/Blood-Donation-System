#include "BloodType.h"

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
