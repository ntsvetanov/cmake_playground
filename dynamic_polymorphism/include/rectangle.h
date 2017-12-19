#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "polygon.h"

class Rectangle : public Polygon
{
	private:
		float m_a;
		float m_b;
	public:
		Rectangle(float m_a, float m_b);
		float getArea();
		float getPerimeter();
};



#endif
