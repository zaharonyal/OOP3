#ifndef _LINE_H_
#define _LINE_H_

#include "canvas.h"
#include "Circle.h"
#include "Line.h"
#include "Point.h"
#include "Rectangle.h"
#include "Shape.h"
#include <iostream>
using namespace std;


class Line :class Shape{
protected:
	Point m_org; // line origin
	Point m_end; // line end
	color m_color;
public:
	Line(const Point& p1, const Point& p2, color c) : m_org(p1), m_end(p2), m_color(c) {}
	void move(const Point& p)
	{
		m_org += p;
		m_end += p;
	}
	void draw() const;
	double length() const;
	void scale(int) const;
};

#endif