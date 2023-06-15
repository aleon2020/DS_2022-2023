#ifndef SALARIED_PROGRAMMER_H
#define SALARIED_PROGRAMMER_H

#include <string>
#include "CommissionProgrammer.h"

class SalariedProgrammer : public CommissionProgrammer {
public:
  SalariedProgrammer (const std::string &, const std::string &,
    double = 0.0, double = 0.0, double = 0.0);

  void setSalary (double);
  double getSalary() const;

  double earnings() const; // calculate earnings
  void print() const; // print SalariedProgrammer object
private:
  double salary; // base salary
}; // end class SalariedProgrammer

#endif

