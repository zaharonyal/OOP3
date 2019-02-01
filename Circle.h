#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "canvas.h"
#include "Point.h"
#include "Shape.h"



class  Circle
{
public:
	Circle(const Point& center, int Radius, color c) :m_org(center), m_color(c), m_radius(Radius) {};
	const Shape who_am_i()const :{return Circle};
	void move(const Point&) const {
		m_org += p;
	}
	void draw() const = 0;
	double area()const = 0;

private:
	int m_radius;
	color m_color;
	Point m_org;
};




#endif