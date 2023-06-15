#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>
using namespace std;

int main() { 
  deque <double> doubles; // deque of doubles
  ostream_iterator <double> outIt (cout, " ");

  doubles.push_front (3.1);
  doubles.push_front (4.3);
  doubles.push_back (1.5);

  cout << "doubles content: "; // output: 4.3 3.1 1.5
  for (unsigned int i = 0; i < doubles.size(); i++ )
    cout << doubles [i] << ' '; // subscript op. to get elem.

  doubles.pop_front(); // rm 1st. elem., output: 3.1 1.5
  cout << "\ndoubles content after pop_front: ";
  copy (doubles.begin(), doubles.end(), outIt);

  doubles [1] = 6.7; // subscript op. to set value at pos. 1
  cout << "\ndoubles content after doubles [1] = 6.7: ";
  copy (doubles.begin(), doubles.end(), outIt); // output: 3.1 6.7
  cout << endl;
} // end main
