#include <iostream>
#include <fstream>
#include <cstdlib>
#include "User.h"
using namespace std;

int main() {
  ofstream outUsersFile ("users.dat", ios::out | ios::binary);

  if (!outUsersFile) { // ofstream could not open file
    cerr << "File could not be opened." << endl;
    exit (1);
  }

  User user; // fill with zeros each data member

  for (int i = 0; i < 10; i++) // write 10 empty records to file
    outUsersFile.write (reinterpret_cast <const char *> (&user),
       sizeof (User));
}
