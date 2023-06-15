#ifndef FACTORY_H
#define FACTORY_H
#include "Widget.h"

class Factory { // includes methods to create all platforms' GUI
 public: // abstract factory methods returns abstract products
  virtual Widget *create_button() = 0;
  virtual Widget *create_menu() = 0;
};
#endif
