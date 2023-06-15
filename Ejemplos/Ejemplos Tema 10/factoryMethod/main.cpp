#include "Engine.h"

int main() {
  vector<Engine*> engines;
  int choice;
  while (true) {
    cout << "Choose engine: Gasoline=1 Diesel=2 Electric=3 (Exit=0): ";
    cin >> choice;
    if (choice == 0) break;
    engines.push_back (Engine::makeEngine(choice)); // factory method is called
    // depending on the engine, the object instance created will be different
  }
  for (int i = 0; i < engines.size(); i++)
    engines[i]->label();
  for (int i = 0; i < engines.size(); i++)
    delete engines[i];
}
