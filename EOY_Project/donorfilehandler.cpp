#include "donorfilehandler.h"
#include <string>
#include <cstring>

using namespace std;

 
donorfilehandler ::donorfilehandler(string fname){
    donorfilehandler ::setfilename(fname);
}
void donorfilehandler::createdonor(string Dname,string Daddress,string Dcontact,string Dbloodtype,string Dbloodbank,string Did,string Available)
{
// file pointer
fstream foutcreate;

// opens an existing csv file or creates a new file.
foutcreate.open(donorfilehandler::getfilename(), ios::out | ios::app);

    // Insert the data to file
    foutcreate << Did << ", "
            << Dname << ", "
            << Daddress << ", "
            << Dcontact << ", "
            << Dbloodtype << ", "
            << Dbloodbank << ", "
            << Available
            << "\n";

    cout <<" Data of Donor "<<Dname<<" Inserted Successfully."<<endl;

}

