#include <iostream>
#include <exception>
using namespace std;

void rethrowException() {
  try {
    cout << "rethrowException(): Throwing an exception\n";
    throw exception();
  } catch (exception &except) {
    cout << "rethrowException(): Exception caught & rethrown\n";
    throw; // exception is raised!
  }
  cout << "rethrowException(): After caught & rethrown\n";
}

int main() {
  try {
    cout << "main(): Calling rethrowException()\n";
    rethrowException();
    cout << "main(): After calling rethrowException()\n";
  } catch (exception &except) {
    cout << "main(): Exception caught\n";
  }
  cout << "main(): After caught exception()\n";
}
