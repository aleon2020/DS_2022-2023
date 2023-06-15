#include "RectangleAdapter.h"

int main() {
  int x = 10, y = 40, w = 320, h = 240;

  // I can use new interface (Rectangle) through the adapter
  Rectangle *r = new RectangleAdapter (x,y,w,h); // new coord. system

  r->draw(); // new drawing interface
  return 0;
}
