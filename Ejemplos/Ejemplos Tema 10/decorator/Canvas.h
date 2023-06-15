#ifndef CANVAS_H
#define CANVAS_H

#include "Shape.h"

class Canvas : public Shape { // Composite class
  public:
    void draw () const {
      // call draw function for each element in shapes vector
      for_each(shapes.begin(), shapes.end(), mem_fun(&Shape::draw));
    }
    void add (Shape* s) {
      shapes.push_back (s);
    }

  private:
    vector <Shape*> shapes;
};
#endif
