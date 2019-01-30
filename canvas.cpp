#include "canvas.h"
#include <iostream>
using namespace std;

ostream& operator<<(ostream& os, color c)
{
	switch (c)
	{
		case color::white:		os << "White "; break;
		case color::red:		os << "Red "; break;
		case color::green:		os << "Green "; break;
		case color::blue:		os << "Blue "; break;
		case color::yellow:		os << "Yellow "; break;
		case color::black:		os << "Black "; break;
		default:				os << "No color ";
	}
	return os;
}

ostream& operator<<(ostream& os, const Point& p)
{
	os << '(' << p.x() << ',' << p.y() << ')';
	return os;
}

void Line::draw() const
{
	cout << "No color Line from " << m_org << " To " << m_end << endl;;
}

double Line::length() const
{
	return sqrt((double)((m_org.x()-m_end.x())*(m_org.x()-m_end.x()) + (m_org.y()-m_end.y())*(m_org.y()-m_end.y())));
}

void C_Line::draw() const
{
	cout<< m_color << " Line from " << m_org << " To " << m_end <<endl;
}

