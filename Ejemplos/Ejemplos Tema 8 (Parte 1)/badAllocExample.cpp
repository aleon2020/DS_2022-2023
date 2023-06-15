#include <iostream>
#include <new>
using namespace std;

int main() {
  double *p[100];

  try {
    for (size_t i = 0; i < 100; ++i) { // size_t is widely used for counts
                                  // represents size of any objet in bytes
      p[i] = new double[999999999]; // may cause exception
      cout << "p[" << i << "] points to 999.999.999 new doubles\n";
    }
  } catch (bad_alloc &except) {
    cerr << "Exception!: " << except.what() << endl;
  }
}

