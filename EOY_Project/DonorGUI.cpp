#include "GUI.h"

using namespace std;

void DonorGUI::Go()
{
	string n, a, c;
	int i;
	cout << "Please enter your name: ";
	getline(cin, n);
	d.setname(n);
	cout << "Please enter your id: ";
	cin >> i;
	d.setID(i);
	cout << "Please enter your bloodtype: ";
	d.Inputbloodtype();
	cout << "Please enter your address: ";
	cin >> a;
	d.setaddress(a);
	cout << "Please enter your contact number: ";
	cin >> c;
	d.setcontactno(c);

}