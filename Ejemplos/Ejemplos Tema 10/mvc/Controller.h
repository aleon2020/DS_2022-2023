#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Model.h"
#include "View.h"
 
class Controller { // abstracts model from view and viceversa
public:
  Controller();
  Controller(const Model&, const View&);
  void setModel (const Model&);
  void setView (const View&);
  void boot();

private:
  Model model;
  View view;
};
#endif
