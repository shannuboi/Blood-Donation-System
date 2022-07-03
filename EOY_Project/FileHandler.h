#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include <cstring>

class filehandler{
public:
    std::string filename;

void setfilename(std::string name);

std::string getfilename();
void read_record_bysearch(std::string tofind);
void delete_record(int ID);

};
#endif


