#include "Patient.h"
using namespace std;

Patient::Patient(Person Person, string disease)
    :
        Person(Person),
        disease(disease)
{}
void Patient::setdisease(string d)
{
    disease = d;
}
;