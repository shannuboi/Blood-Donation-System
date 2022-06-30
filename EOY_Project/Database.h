#ifndef DATABASE
#define DATABASE

#include "BloodBank.h"
#include <vector>
#include <fstream>

class Database
{
public:
	Database();
private:
	std::ifstream File;
	std::vector<BloodBank> banks;
};

#endif // !DATABASE
