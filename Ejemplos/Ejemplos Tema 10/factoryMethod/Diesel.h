#ifndef DIESEL_H
#define DIESEL_H

#include "Engine.h"

class Diesel : public Engine {
  public:
    void label () {
        cout << "Diesel Engine: B or C label\n";
    }
};
#endif
