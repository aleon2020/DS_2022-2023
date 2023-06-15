#include "Client.h"
#include "LinuxFactory.h"
#include "WindowsFactory.h"
#define LINUX // set the flag to Linux platform

int main() {
  Factory *factory;
#ifdef LINUX // switch statement to create a proper factory
  factory = new LinuxFactory;
#else // a Windows platform is being used
  factory = new WindowsFactory;
#endif

  Client *c = new Client(factory); // creates a proper GUI system
  c->draw(); // client doesn't know which draw function is being calling
}
