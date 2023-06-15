#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include "User.h"
using namespace std;
void displayRecord (ostream &, const User &);

int main() {
  ifstream inUsersFile ("users.dat", ios::in | ios::binary);
  // Uses: "users.dat", generated in previous example

  if (!inUsersFile) { // fstream could not open file
    cerr << "File could not be opened." << endl;
    exit (1);
  }
  cout << left << setw (10) << "Record" << setw (11)
    << "Name" << setw (16) << "Surname" << left
    << setw (10) << right << "Phone" << endl;

  User user;
  inUsersFile.read (reinterpret_cast <char *>(&user), 
    sizeof (User));

  while (inUsersFile && !inUsersFile.eof()) {
    if (user.getNumRecord() != 0)
       displayRecord (cout, user);

    inUsersFile.read (reinterpret_cast <char *>(&user), 
      sizeof (User));
  }
}

void displayRecord (ostream &output, const User &record) {
   output << left << setw (10) << record.getNumRecord ()
      << setw (11) << record.getName()
      << setw (16) << record.getSurname()
      << setw (10) << right << record.getPhone() << endl;
}
