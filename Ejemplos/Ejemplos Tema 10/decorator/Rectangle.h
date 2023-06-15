#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
  public:
    void draw () const {
      cout << "Draw rectangle\n";
    }
};
#endif
