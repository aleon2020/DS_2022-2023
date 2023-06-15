#ifndef LINUXFACTORY_H
#define LINUXFACTORY_H
#include "Factory.h"
#include "LinuxButton.h"
#include "LinuxMenu.h"

class LinuxFactory : public Factory {
 public:
  Widget *create_button() {
    return new LinuxButton;
  }
  Widget *create_menu() {
    return new LinuxMenu;
  }
};
#endif
