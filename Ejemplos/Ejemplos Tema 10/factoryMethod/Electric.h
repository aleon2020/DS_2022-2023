#ifndef ELECTRIC_H
#define ELECTRIC_H

#include "Engine.h"

class Electric : public Engine {
  public:
    void label () {
        cout << "Electric Engine: 0 label\n";
    }
};
#endif
