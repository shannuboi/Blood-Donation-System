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
	int GetID() const;
	void setname(std::string n);
	void setID(int i);
	void Inputbloodtype();
	BloodType GetBloodType() const;
	friend std::ostream& operator << (std::ostream& os, const Person &p);
private:
	std::string name;
	int ID;
	BloodType bloodtype;
};

#endif // !PERSON