#include <iostream>
#include <vector>
using namespace std;

template <typename T> void printV (const vector <T> &intV);

int main() {
  const int V_SIZE = 8;
  int array [V_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};
  vector <int> integers; // vector of integers

  cout << "Content before adding elements:"
    << "\n-integers size: " << integers.size()
    << "\n-integers capacity: " << integers.capacity();

  // function push_back adds a new element at the end
  integers.push_back (31);
  integers.push_back (66);
  integers.push_back (11);
  cout << "\nContent after using push_back:"
    << "\n-integers size: " << integers.size()
    << "\n-integers capacity: " << integers.capacity();

  cout << "\n\nShowing array content using pointers: ";
  for (int *ptr = array; ptr != array + V_SIZE; ptr++)
    cout << *ptr << ' ';

  cout << "\nShowing array content using iterators: ";
  printV (integers);

  cout << "\nShowing array content in reverse mode: ";
  vector <int>::const_reverse_iterator rIt; 
  vector <int>::const_reverse_iterator tempIt = integers.rend();
  for (rIt = integers.rbegin(); rIt != tempIt; ++rIt)
    cout << *rIt << ' ';

  cout << endl;
} // end main

// function template for displaying vector elements
template <typename T> void printV (const vector <T> &intV) {
  typename vector <T>::const_iterator constIt;

  // showing array content using a const_iterator
  for (constIt = intV.begin(); constIt != intV.end(); ++constIt)
    cout << *constIt << ' ';
}
