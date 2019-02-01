#include <math.h>
#define _USE_MATH_DEFINES

#include <iostream>
using namespace std;

#include "Circle.h"
#include "canvas.h"



void Circle::draw() const 
{
	cout << m_color << " circle: Center in" << m_org << "Radius in " << m_radius << endl;
}

double Circle::area() const
{
	double sum = 0;
	sum = pow((M_1_PI*m_radius), 2);
	return sum;
}

