#ifndef BLOODTYPE
#define BLOODTYPE

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
	BloodType(Group group, RHfactor rhfactor);
	static bool DonationPossible(BloodType donor, BloodType recipient);
private:
	Group group;
	RHfactor rhfactor;
};

#endif // !BLOODTYPE
