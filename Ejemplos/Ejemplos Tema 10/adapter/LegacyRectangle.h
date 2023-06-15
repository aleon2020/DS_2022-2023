#ifndef LEGACYRECTANGLE_H
#define LEGACYRECTANGLE_H

#include <iostream>

class LegacyRectangle { // legacy class (adaptee)
public:
  LegacyRectangle(int x1, int y1, int x2, int y2) {
    x1_ = x1;
    y1_ = y1;
    x2_ = x2;
    y2_ = y2;
    std::cout << "LegacyRectangle with [(x1,y1),(x2,y2)] coordinates is created\n";
  }

  void legacyDraw() {
    std::cout << "LegacyDraw rectangle is shown\n";
  }

private:
  int x1_;
  int y1_;
  int x2_;
  int y2_;
};
#endif
