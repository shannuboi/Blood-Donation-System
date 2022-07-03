#include "BloodBank.h"
#include <iostream>

BloodBank::BloodBank()
{
}

void BloodBank::DisplayAllDonorData() const
{
	for (const Donor& d : donors)
	{
		std::cout << d << "\n";
	}
}
