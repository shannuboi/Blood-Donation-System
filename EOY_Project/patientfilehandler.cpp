#include "filehandler.h"
#include "patientfilehandler.h"
#include <string>
#include <cstring>
    
patientfilehandler::patientfilehandler(string fname){
setfilename(fname);
}
void patientfilehandler ::createpatient(string Pname, string Paddress, string Pcontact, string Pbloodtype, string Pdisease,string Pid, string Did,string Dname, string Dbloodbank)
{
// file pointer
fstream foutcreate;

// opens an existing csv file or creates a new file.
foutcreate.open(filename, ios::out | ios::app);

    // Insert the data to file
    foutcreate << Did << ", "
            << Pname << ", "
            << Paddress << ", "
            << Pcontact << ", "
            << Pbloodtype << ", "
            << Pdisease << ", "
            << Pid << ", "
            << Did << ", "
            << Dname << ", "
            << Dbloodbank << ", "
            << "\n";

    cout <<" Data of Patient "<<Pname<<" Inserted Successfully."<<endl;

}