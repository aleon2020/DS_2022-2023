#include <iostream>
#include <stdexcept>
#include "SalariedProgrammer.h"

using namespace std;

SalariedProgrammer::SalariedProgrammer(const string &name, const string &ssn, 
   double projects, double rate, double salary) 
   // explicitly call base-class constructor
   : CommissionProgrammer (name, ssn, projects, rate) {
   setSalary (salary); // validate and store base salary
}

void SalariedProgrammer::setSalary (double salary) {
  if (salary >= 0.0)
    this->salary = salary;                                     
  else                                                        
    throw invalid_argument ("Salary must be >= 0.0");
}

double SalariedProgrammer::getSalary () const {
  return salary;
}

double SalariedProgrammer::earnings () const {
  return getSalary() + CommissionProgrammer::earnings(); // call base earnings
}

void SalariedProgrammer::print () const {
  cout << "salaried ";

  CommissionProgrammer::print(); // call CommissionProgrammer's print function

  cout << "\nbase salary: " << getSalary();
}
