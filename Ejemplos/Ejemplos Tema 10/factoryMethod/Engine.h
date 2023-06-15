#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include <vector>

using namespace std;

class Engine {
  public:
    // Factory Method
    static Engine *makeEngine (int choice);
    virtual void label() = 0;
};
#endif
