#ifndef CANVAS_H
#define CANVAS_H

#include <iostream>

using namespace std; 

class Canvas {
public:
	virtual void request() = 0;
	virtual ~Canvas() {}
};
#endif
