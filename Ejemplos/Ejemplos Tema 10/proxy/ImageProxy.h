#ifndef IMAGEPROXY_H
#define IMAGEPROXY_H

#include "Canvas.h"
#include "ImageProxy.h"
#include "Image.h"

class ImageProxy : public Canvas {
private:
	Canvas* image; // ptr to the subject (canvas)
public:
	ImageProxy() : image (new Image()) {}
	~ImageProxy() {
		delete image;
	}

	void request() { // forward calls to the (real) Image
		image->request(); 
	}
};
#endif
