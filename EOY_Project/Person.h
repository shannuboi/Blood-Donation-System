#ifndef PERSON
#define PERSON

#include "BloodType.h"
#include <string>
#include <iostream>

class Person 
{
public:
	Person();
	std::string GetName() const;
	std::string GetID() const;
	void setname(std::string n);
	void setID(int i);
	void Inputbloodtype();
	BloodType GetBloodType() const;
	friend std::ostream& operator << (std::ostream& os, const Person &p);
private:
	std::string name, ID;
	BloodType bloodtype;
};

#endif // !PERSON