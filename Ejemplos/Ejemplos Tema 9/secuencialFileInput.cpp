#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
   ifstream inUsersFile ("users.dat", ios::in);

   if (!inUsersFile) {
      cerr << "File could not be opened" << endl;
      exit (1);
   }

   string name;
   string surname;
   int phone;
   cout << "Name\tSurname\tPhone\n";

   while (inUsersFile >> name >> surname >> phone)
      cout << name << "\t" << surname << "\t" << phone << endl;
}
