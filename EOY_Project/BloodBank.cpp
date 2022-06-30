#include "BloodBank.h"
#include <iostream>

BloodBank::BloodBank()
{
	donors.emplace_back();
	donors.emplace_back();
}

void BloodBank::DisplayAllDonorData() const
{
	for (const Donor& d : donors)
	{
		std::cout << d << "\n";
	}
}
