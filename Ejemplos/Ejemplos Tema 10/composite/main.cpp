#include "Line.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Canvas.h"

int main() {
  Line l;
  l.draw(); // every leaf object can draw itself
  Rectangle r;
  r.draw();
  Circle c;
  c.draw();

  Canvas canvas; // it composes a complete structure...
  canvas.add(&l);
  canvas.add(&r);
  canvas.add(&c);
  canvas.add(&r);
  canvas.draw(); // ...and draw the structure at once!

  return 0;
}
