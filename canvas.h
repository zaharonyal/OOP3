#ifndef _CANVAS_H_
#define _CANVAS_H_

#include "canvas.h"
#include "Circle.h"
#include "Line.h"
#include "Point.h"
#include "Rectangle.h"
#include "Shape.h"

#include <iostream>
using namespace std;

enum class color { white, red, green, blue, yellow, black, no_color,END_OF_COLORS };
ostream& operator<<(ostream& os, color c);
ostream& operator<<(ostream& os, const Point& p);


#endif		// _CANVAS_H_