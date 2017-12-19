#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "polygon.h"

class Triangle : public Polygon
{
	private:
		float m_a;
		float m_b;
		float m_c;
	public:
	
		Triangle(float m_a, float m_b, float m_c);
		float getArea(); 
		float getPerimeter(); 
};



#endif
