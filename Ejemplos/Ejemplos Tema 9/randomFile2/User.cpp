#include <string>
#include "User.h"
using namespace std;

User::User (string myName, string mySurname, int myPhone) {
  setName (myName);
  setSurname (mySurname);
  setPhone (myPhone);
}

int User::getNumRecord() const {
  return numRecord;
}

void User::setNumRecord (int record) {
  numRecord = record;
}

string User::getName() const {
  return name;
}

void User::setName (string myName) { // copy at most 10 char
  int length = myName.size();
  length = (length < 10 ? length : 9);
  myName.copy (name, length);
  name [length] = '\0'; // null character
}

string User::getSurname() const {
  return surname;
}

void User::setSurname (string mySurname) { // copy at most 15 char
  int length = mySurname.size();
  length = (length < 15 ? length : 14);
  mySurname.copy (surname, length);
  surname [length] = '\0';
}

int User::getPhone() const {
  return phone;
}

void User::setPhone (int myPhone) {
  phone = myPhone;
}

