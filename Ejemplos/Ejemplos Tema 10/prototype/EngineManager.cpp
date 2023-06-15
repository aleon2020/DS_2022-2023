#include "EngineManager.h"

Engine* EngineManager::engineTypes[] = {
  0, new Diesel, new Gasoline, new Electric
};

Engine* EngineManager::makeEngine (int choice) {
  return engineTypes[choice]->clone();
}
