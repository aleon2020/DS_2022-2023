#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

// prototype for function template printL
template <typename T> void printL (const list< T > &lRefs);

int main() { 
  const int V_SIZE = 4;
  int array [V_SIZE] = {1, 2, 3, 4};
  list <int> integers;
  list <int> integers2;

  integers.push_front (2);
  integers.push_front (4);
  integers.push_back (8); // remember: reverse mode!
  integers.push_back (6);

  cout << "integers content: ";
  printL (integers);

  integers.sort(); // sorting list in ascendent order
  cout << "\nintegers content after sorting: ";
  printL (integers);

  // insert elements of array into integers2                   
  integers2.insert (integers2.begin(), array, array + V_SIZE);
  cout << "\nintegers2 content after insert: ";
  printL (integers2);

  // remove integers2 elements and insert at end of integers
  integers.splice (integers.end(), integers2); // cut/paste
  cout << "\nintegers content after splice: ";
  printL (integers);
  cout << "And integers2 content after splice: ";
  printL (integers2);

  integers.sort();
  cout << "\nintegers content after sorting: ";
  printL (integers);

  integers2.insert (integers2.begin(), array, array + V_SIZE);
  integers2.sort();                         
  cout << "\nintegers2 content after inserting and sorting: ";
  printL (integers2);

  integers.merge (integers2);
  cout << "\nintegers content after merging integers2: ";
  printL (integers);
  cout << "And integers2 content: ";
  printL (integers2);

  integers.pop_front(); // remove front element
  integers.pop_back(); // remove back element
  cout << "\nintegers content after poping front & back elements ";
  printL (integers);

  integers.unique(); // remove duplicate elements
  cout << "\nintegers content after unique operation: ";
  printL (integers);

  integers.swap (integers2); // swap elements
  cout << "\nintegers content after swapping : ";
  printL (integers);
  cout << "And integers2 content: ";
  printL (integers2);

  // integers content is replaced with elements of integers2
  integers.assign (integers2.begin(), integers2.end());
  cout << "\nintegers content after assign operation: ";
  printL (integers);

  integers.merge(integers2);
  cout << "\nintegers content after merging integers2: ";
  printL (integers); 

  integers.remove (2); // remove all 2s
  cout << "\nintegers content after removing all 2s: ";
  printL (integers);
  cout << endl;
} // end main

template <typename T> void printL (const list <T> &lRefs) {
  if (lRefs.empty())
    cout << "List empty!";
  else {
    ostream_iterator <T> output (cout, " ");
    copy (lRefs.begin(), lRefs.end(), output);
  }
}
