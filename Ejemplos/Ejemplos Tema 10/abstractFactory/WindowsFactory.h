#ifndef WINDOWSFACTORY_H
#define WINDOWSFACTORY_H
#include "Factory.h"
#include "WindowsButton.h"
#include "WindowsMenu.h"

class WindowsFactory : public Factory {
 public:
  Widget *create_button() {
    return new WindowsButton;
  }
  Widget *create_menu() {
    return new WindowsMenu;
  }
};
#endif
