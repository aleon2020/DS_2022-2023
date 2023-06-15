#ifndef GASOLINE_H
#define GASOLINE_H

#include "Engine.h"

class Gasoline : public Engine {
  public:
    void label () {
        cout << "Gasoline Engine: B or C label\n";
    }
};
#endif
