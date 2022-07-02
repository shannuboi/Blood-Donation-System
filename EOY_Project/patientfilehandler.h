#ifndef PATIENTFILEHANDLER_H
#define PATIENTFILEHANDLER_H

#include "filehandler.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include <cstring>

using namespace std;

class patientfilehandler : public filehandler{
public:    
    patientfilehandler(string fname);
    void createpatient(string Pname, string Paddress, string Pcontact, string Pbloodtype, string Pdisease,string Pid, string Did,string Dname, string Dbloodbank);
};
#endif