#ifndef IMAGE_H
#define IMAGE_H

#include "Canvas.h"

class Image : public Canvas {
public:
	void request() { 
		cout << "Image (real subject): request()" << endl; 
	}
};
#endif
