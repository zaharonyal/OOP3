#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>
using namespace std;
class Point {
private:
	int m_xc, m_yc;	//(x,y) coordinats
public:
	Point(int x = 0, int y = 0) : m_xc(x), m_yc(y) {}
	int x(void) const { return m_xc; }
	int y(void) const { return m_yc; }
	Point operator+(const Point& p) const
	{
		return Point(m_xc + p.m_xc, m_yc + p.m_yc);
	}
	Point& operator+=(const Point& p) //move point
	{
		m_xc += p.m_xc;
		m_yc += p.m_yc;
		return *this;
	}
	friend ostream& operator<<(ostream& os, const Point& p);
};
#endif