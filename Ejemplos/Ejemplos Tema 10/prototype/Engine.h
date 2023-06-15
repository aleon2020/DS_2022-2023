#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include <vector>
#include <functional>

using namespace std;

class Engine {
  public:
    virtual Engine* clone() const = 0;
    virtual void label() = 0;
};
#endif
