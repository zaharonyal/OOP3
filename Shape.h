#pragma once

#include "canvas.h"
#include "Point.h"
#include "Circle.h"

class Shape
{
public:
	Shape(const Point& p, color c) :m_org(p), m_color(c) {};
	virtual ~Shape();
	virtual void who_am_i()const = 0;
	virtual void move() const = 0;
	virtual void draw() const = 0;
	virtual double area()const = 0;



private:
	Point m_org;
	color m_color;
};
