#ifndef WIDGET_H
#define WIDGET_H
#include <iostream>

using namespace std;

class Widget { // common interface to all platforms
 public:
  virtual void draw() = 0;
};
#endif
