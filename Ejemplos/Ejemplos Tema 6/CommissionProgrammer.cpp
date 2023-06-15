#include <iostream>
#include <stdexcept>
#include "CommissionProgrammer.h"

using namespace std;

CommissionProgrammer::CommissionProgrammer (const string &name, const string &ssn,
  double projects, double rate) : name (name), ssn (ssn) {
  setNumberOfProjects (projects); // validate and store number of projects
  setCommissionRate (rate); // validate and store commission rate
}

void CommissionProgrammer::setName (const string &name) {
  this->name = name;
}

string CommissionProgrammer::getName () const {
  return name;
}

void CommissionProgrammer::setSSN (const string &ssn) {
  this->ssn = ssn;
}

string CommissionProgrammer::getSSN () const {
  return ssn;
}

void CommissionProgrammer::setNumberOfProjects (double projects) {
  if (projects >= 0.0)
    numberOfProjects = projects;
  else
    throw invalid_argument ("Number of projects must be >= 0.0" );
}

double CommissionProgrammer::getNumberOfProjects () const {
  return numberOfProjects;
}

void CommissionProgrammer::setCommissionRate (double rate) {
  if (rate > 0.0 && rate < 100.0)
    commissionRate = rate;
  else
    throw invalid_argument ("Commission rate must be > 0.0 and < 100.0");
}

double CommissionProgrammer::getCommissionRate () const {
   return commissionRate;
}

double CommissionProgrammer::earnings() const {
  return getCommissionRate() * getNumberOfProjects();
}

void CommissionProgrammer::print() const {
  cout << "commission programmer: " << getName()
    << "\nsocial security number: " << getSSN() 
    << "\nnumber of projects: " << getNumberOfProjects() 
    << "\ncommission rate: " << getCommissionRate();
}
