#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
   ofstream outUsersFile ("users.dat", ios::out); // open file

   if (!outUsersFile) { // file couldn't be opened
      cerr << "File could not be opened" << endl;
      exit (1);
   }

   cout << "Enter data according to 'name surname phone' (press CTRL+C to finish):\n";

   string name;
   string surname;
   int phone;
   while (cin >> name >> surname >> phone ) {
      outUsersFile << name << ' ' << surname << ' ' << phone << endl;
   }
}

