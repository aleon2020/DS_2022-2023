#ifndef COMMISSION_PROGRAMMER_H
#define COMMISSION_PROGRAMMER_H

#include <string>

using namespace std;

class CommissionProgrammer {
public:
  CommissionProgrammer (const string &, const string &, double = 0.0, double = 0.0);
  void setName (const string &);
  string getName () const;
  void setSSN (const string &);
  string getSSN () const;
  void setNumberOfProjects (double);
  double getNumberOfProjects () const;
  void setCommissionRate (double);
  double getCommissionRate () const;
  double earnings() const; // calculate earnings
  void print() const; // print CommissionProgrammer object
private:
  string name;
  string ssn; // Social Security Number
  double numberOfProjects;
  double commissionRate;
}; // end class CommissionProgrammer

#endif
