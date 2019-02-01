#include "canvas.h"
#include "Circle.h"
#include "Line.h"
#include "Point.h"
#include "Rectangle.h"
#include "Shape.h"

#include <iostream>
using namespace std;


void Line::draw() const
{
	cout << m_color <<" line " << m_org << " To " << m_end << endl;;
}

double Line::length() const
{
	return sqrt((double)((m_org.x() - m_end.x())*(m_org.x() - m_end.x()) + (m_org.y() - m_end.y())*(m_org.y() - m_end.y())));
}
