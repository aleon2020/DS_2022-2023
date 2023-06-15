#ifndef ENGINEMANAGER_H
#define ENGINEMANAGER_H

#include "Diesel.h"
#include "Gasoline.h"
#include "Electric.h"

const int N = 4;

struct Destruct { // () op. is overloaded to delete engines in a for_each statement
  void operator() (Engine *e) const { 
    delete e; 
  }
};

class EngineManager {
public:
  static Engine* makeEngine (int choice);
  // makeEngine calls concrete prototype's clone() method

  ~EngineManager(){}

private:
  static Engine* engineTypes[N];
};
#endif
