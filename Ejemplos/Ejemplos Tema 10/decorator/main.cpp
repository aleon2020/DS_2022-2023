#include "Line.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Canvas.h"
#include "ColoredShape.h"

int main() {
  Line l;  // basic objects
  l.draw();
  Rectangle r;
  r.draw();
  Circle c;
  c.draw();

  ColoredShape blueL {l, "blue"}; // objects are colored
  ColoredShape greenR {r, "green"};
  ColoredShape redC {c, "red"};
  
  return 0;
}
