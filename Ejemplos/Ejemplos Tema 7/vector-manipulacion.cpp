#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <stdexcept>
using namespace std;

int main() {
  const int V_SIZE = 8;
  int array [V_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};
  vector <int> integers (array, array + V_SIZE);
  ostream_iterator <int> outIt (cout, " ");

  cout << "Showing vector content using output stream: ";
  copy (integers.begin(), integers.end(), outIt);

  cout << "\nThe first element is: " << integers.front()
    << "\nAnd the last one is: " << integers.back();

  integers [0] = 31; // 0 is the first indexed position
  integers.at (2) = 23; // another way to set an elem.

  integers.insert (integers.begin() + 1, 77); // to 2nd pos.

  cout << "\n\nVector content (after changes) using output stream: ";
  copy (integers.begin(), integers.end(), outIt);

  try { // trying to access an out-of-range element
    integers.at (100) = 777;
  } // an exception will be raised!
  catch (out_of_range &outOfRange) { // out_of_range exception
    cout << "\nException: " << outOfRange.what();
  } // end catch

  integers.erase (integers.begin()); // erase first element
  cout << "\n\nVector content after erasing the first elem.: ";
  copy (integers.begin(), integers.end(), outIt);

  integers.erase (integers.begin(), integers.end()); // all
  cout << "\nVector content after erasing remaining elem. "
    << (integers.empty() ? "is" : "is not") << " empty";

  // insert elements from array
  integers.insert (integers.begin(), array, array + V_SIZE);
  cout << "\nVector content before clear(): ";
  copy (integers.begin(), integers.end(), outIt);

  integers.clear(); // it calls erase to empty a collection
  cout << "\nVector content after clear() "
    << (integers.empty() ? "is" : "is not") << " empty" << endl;
} // end main
