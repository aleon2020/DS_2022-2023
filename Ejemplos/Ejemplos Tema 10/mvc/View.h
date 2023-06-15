#ifndef VIEW_H
#define VIEW_H

#include "Model.h"                                               

class View { // responsible to show data to the user
public:
  View ();
  View (const Model&);
  void setModel (const Model&);
  void renderData ();
private:
  Model model;
};
#endif
