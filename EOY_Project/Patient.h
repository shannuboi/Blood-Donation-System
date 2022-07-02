#include "Person.h"
 
class Patient : public Person
{
    std::string disease;
    
public:
	Patient() = default;
    Patient(Person Person, std::string disease);
    void setdisease(std::string d);
};