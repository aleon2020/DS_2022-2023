#ifndef CAR_H
#define CAR_H

#include "LightSystem.h"
#include "BrakeSystem.h"

class Car { // Facade class
  public:
    void turnIgnitionOn () {
      engine.turnOn ();
      brakeSystem.turnOn ();
      lightSystem.turnOn ();
    }
  private:
    Engine engine;
    BrakeSystem brakeSystem;
    LightSystem lightSystem;
};
#endif
