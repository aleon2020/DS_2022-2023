#include <iostream>
#include <iomanip> // IO manipulation
#include "SalariedProgrammer.h" // it includes all classes

using namespace std;

int main() {
  SalariedProgrammer programmer ("Julio Vega", "363991763631", 5, 70., 1000);

  cout << fixed << setprecision (2); // set floating-point output formatting

  // get commission programmer data
  cout << "Programmer information obtained by get functions: \n" 
    << "\nName is " << programmer.getName() 
    << "\nSocial security number is " 
    << programmer.getSSN() 
    << "\nNumber of projects is " << programmer.getNumberOfProjects() 
    << "\nCommission rate is " << programmer.getCommissionRate()
    << "\nBase salary is " << programmer.getSalary() << endl;

  programmer.setSalary (1200); // base salary is updated

  cout << "\nUpdated programmer information output by print function: \n\n";
  programmer.print(); // display the new programmer information

  cout << "\n\nProgrammer's earnings: $" << programmer.earnings() << endl;
}

