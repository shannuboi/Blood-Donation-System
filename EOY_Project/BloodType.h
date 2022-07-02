#ifndef BLOODTYPE
#define BLOODTYPE

#include <iostream>
#include <string>

class BloodType
{
public:
	enum class Group
	{
		O, A, B, AB
	};
	enum class RHfactor
	{
		plus, minus
	};
public:
	BloodType() = default;
	BloodType(Group group, RHfactor rhfactor);
	static bool DonationPossible(BloodType donor, BloodType recipient);
	friend std::ostream& operator<<(std::ostream& os, const BloodType& b);
	friend std::istream& operator>>(std::istream& is, BloodType& b);
private:
	Group group;
	RHfactor rhfactor;
};

#endif // !BLOODTYPE
