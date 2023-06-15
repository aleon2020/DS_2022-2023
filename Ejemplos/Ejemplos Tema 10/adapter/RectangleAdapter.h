#include "Rectangle.h"
#include "LegacyRectangle.h"

// Adapter wrapper
class RectangleAdapter : public Rectangle, private LegacyRectangle {
public:
  RectangleAdapter (int x, int y, int w, int h):
    LegacyRectangle (x, y, x + w, y + h) {
      std::cout << "RectangleAdapter with [(x,y),(x+w,x+h)] coordinates is created\n";
    }
  
  void draw() {
    std::cout << "RectangleAdapter draw() method is called\n";
    legacyDraw ();
  }
};
