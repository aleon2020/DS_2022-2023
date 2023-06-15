#ifndef LINE_H
#define LINE_H

#include "Shape.h"

class Line : public Shape {
  public:
    void draw () const {
      cout << "Draw line\n";
    }
};
#endif
