#include <iostream>
#include <fstream>
#include <cstdlib>
#include "User.h"
using namespace std;

int main() {
  int numRecord;
  string name;
  string surname;
  int phone;

  fstream outUsersFile ("users.dat", ios::in | ios::out | ios::binary); // ios::in will require an existing file
  // Uses: "users.dat", generated in previous example

  if (!outUsersFile) { // fstream could not open file
    cerr << "File could not be opened." << endl;
    exit (1);
  }

  cout << "Enter record number (1 to 10, 0 to end)\n> ";

  User user;
  cin >> numRecord;

  while (numRecord > 0 && numRecord <= 10) {
    cout << "Enter name, surname and phone\n> ";
    cin >> name;
    cin >> surname;
    cin >> phone;

    user.setNumRecord (numRecord);
    user.setName (name);
    user.setSurname (surname);
    user.setPhone (phone);

    outUsersFile.seekp ((user.getNumRecord() - 1 ) * 
       sizeof (User));

    outUsersFile.write (reinterpret_cast <const char *> (&user),
       sizeof (User));

    cout << "Enter record number (1 to 10, 0 to end)\n> ";
    cin >> numRecord;
  }
}

