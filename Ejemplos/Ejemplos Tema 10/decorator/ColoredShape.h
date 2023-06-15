#ifndef COLOREDSHAPE_H
#define COLOREDSHAPE_H

#include "Shape.h"

string removeNumbers (string);

class ColoredShape : public Shape {
  public:
    ColoredShape (const Shape& s, const string &c) : shape{s}, color{c} {
      cout << removeNumbers(typeid(s).name()) << " colored in " << c << endl;
    }
    void draw () const {
      cout << "Draw circle\n";
    }

  private:
    const Shape& shape;
    string color;
};

// ***** useful function to extract number from string
// it is used to extract length number from typeid(s).name() function
// which is used to dinamically extract the class name
// Otherwise, typeide(s).name() return, e.g. "4Line", "6Circle", ...
string removeNumbers (string str) {
  int n = 0;
  for(int i = 0; i < str.length(); i++){
    if(!isdigit(str[i])){
      str[n] = str[i];
      n++;
    }
  }

  return str.substr(0,n);
}
#endif
