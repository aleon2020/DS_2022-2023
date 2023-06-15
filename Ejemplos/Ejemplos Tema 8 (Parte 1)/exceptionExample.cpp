#include <iostream>
#include "DivisionException.h"
using namespace std;

// get division but throw divisionException if divide by zero
double getDivision (int num, int den) {
  if (den == 0) throw DivisionException(); // function is ended

  // otherwise:
  return static_cast<double> (num) / den;
} // end function getDivision

int main() {
  int n1, n2;
  double result;

  cout << "Please, type two integers:\n";

  while (cin >> n1 >> n2) {
    try {
      result = getDivision (n1, n2);
      cout << "The getDivision result is: " << result << endl;
    } catch (DivisionException &except) {
      cout << "Exception: " << except.what() << endl;
    }
    
    cout << "Please, type two integers:\n";
  }
  cout << endl;
}

