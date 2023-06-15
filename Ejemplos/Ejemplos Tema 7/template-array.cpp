#include <iostream>
using namespace std;

template <typename T>
void printArray (const T * const array, int numElems) {
  for (int i = 0; i < numElems; i++) cout << array [i] << " ";
}

int main() {
  const int sizeA = 6, sizeB = 7, sizeC = 8; // arrays size

  int arrayA [sizeA] = {1, 2, 3, 4, 5, 6};
  double arrayB [sizeB] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
  char arrayC [sizeC] = "WELCOME"; // 8th position for null

  cout << endl << "Array A: " << endl;
  printArray (arrayA, sizeA); // receives an int-array
  cout << endl << "Array B: " << endl;
  printArray (arrayB, sizeB); // receives a double-array
  cout << endl << "Array C: " << endl;
  printArray (arrayC, sizeC); // receives a char-array
}
