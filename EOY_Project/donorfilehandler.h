#ifndef DONORFILEHANDLER_H
#define DONORFILEHANDLER_H

#include "filehandler.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include <cstring>

using namespace std;

class donorfilehandler : public filehandler{
public:    
    donorfilehandler(string fname);
    void createdonor(string Dname,string Daddress,string Dcontact,string Dbloodtype,string Dbloodbank,string Did,string Available);

};

#endif