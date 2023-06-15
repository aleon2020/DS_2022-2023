#ifndef ELECTRIC_H
#define ELECTRIC_H

#include "Engine.h"

class Electric : public Engine {
  public:
    Engine* clone() const {
      return new Electric;
    }
    void label () {
      cout << "Electric Engine: 0 label\n";
    }
};
#endif
