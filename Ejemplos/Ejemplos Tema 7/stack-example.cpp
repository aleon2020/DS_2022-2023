#include <iostream>
#include <stack>
#include <vector>
#include <list>
using namespace std;

template <typename T> void pushElems (T &stackRef);
template <typename T> void popElems (T &stackRef);

int main() {
  stack <int> dequeStack; // stack with a deque container
  stack <int, vector <int>> vectorStack; // with a vector cont.
  stack< int, list< int > > listStack; // with a list cont.

  cout << "Pushing elements on the dequeStack: ";
  pushElems (dequeStack);
  cout << "\nPushing elements on the vectorStack: ";
  pushElems (vectorStack);
  cout << "\nPushing elements on the listStack: ";
  pushElems (listStack);
  cout << "\n\n";

  cout << "Popping elements from the dequeStack: ";
  popElems (dequeStack);
  cout << "\nPopping elements from the vectorStack: ";
  popElems (vectorStack);
  cout << "\nPopping elements from the listStack: ";
  popElems (listStack);
  cout << endl;
} // end main

template <typename T> void pushElems (T &stackRef) {
  for (int i = 1; i <= 10; i++) {
    stackRef.push (i);
    cout << stackRef.top() << ' '; // show the top element
  }
}

template <typename T> void popElems (T &stackRef) {
  while (!stackRef.empty()) {
    cout << stackRef.top() << ' '; // show the top element
    stackRef.pop(); // it removes the top element
  }
}
