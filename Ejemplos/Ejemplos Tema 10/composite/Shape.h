#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <vector>
#include <functional>

using namespace std;

class Shape {
  public:
    virtual void draw () const = 0;
    virtual void remove (Shape* s) {};
    virtual void add (Shape* s) {};
    virtual void getChild (int) {};
    virtual ~Shape() {};
};
#endif
