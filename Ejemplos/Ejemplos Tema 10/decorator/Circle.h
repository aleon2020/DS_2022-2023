#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
  public:
    void draw () const {
      cout << "Draw circle\n";
    }
};
#endif
