#include "Engine.h"
#include "Diesel.h"
#include "Gasoline.h"
#include "Electric.h"

Engine *Engine::makeEngine (int choice) {
  if (choice == 1)
    return new Gasoline;
  else if (choice == 2)
    return new Diesel;
  else
    return new Electric;
}

