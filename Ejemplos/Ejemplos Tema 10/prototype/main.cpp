#include "Engine.h"
#include "EngineManager.h"

int main() {
  vector<Engine*> engines;
  int choice;
  while (true) {
    cout << "Choose engine: Gasoline=1 Diesel=2 Electric=3 (Exit=0): ";
    cin >> choice;
    if (choice == 0) break;
    engines.push_back (EngineManager::makeEngine(choice)); // prototype manager is called
    // it lets loading/downloading available prototypes in exec. time
  }
  for (int i = 0; i < engines.size(); i++)
    engines[i]->label();

  Destruct d; // calls Destruct::operator()
  for_each(engines.begin(), engines.end(), d);
}
