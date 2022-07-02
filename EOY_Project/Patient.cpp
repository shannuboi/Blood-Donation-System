#include "Patient.h"
using namespace std;

Patient::Patient()
	:
	fhandler("Patient_data.csv")
{
}

Patient::Patient(Person Person, string disease)
    :
    Person(Person),
    disease(disease),
	fhandler("Patient_data.csv")
{}

void Patient::setaddress(std::string a)
{
	address = a;
}

void Patient::setcontactno(std::string c)
{
	contactNo = c;
}

void Patient::setdisease(string d)
{
    disease = d;
}