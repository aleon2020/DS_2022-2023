#ifndef GASOLINE_H
#define GASOLINE_H

#include "Engine.h"

class Gasoline : public Engine {
  public:
    Engine* clone() const {
      return new Gasoline;
    }
    void label () {
      cout << "Gasoline Engine: B or C label\n";
    }
};
#endif
