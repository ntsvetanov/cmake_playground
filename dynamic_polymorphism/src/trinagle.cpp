#include <iostream>
#include <stdexcept>

#include "triangle.h"




Triangle::Triangle(float a, float b, float c) 
{   
	if(a < 0 || b < 0 || c < 0)
		throw std::invalid_argument( "received negative value" );
	
	m_a = a;
	m_b = b;
	m_c = c;
}


float Triangle::getArea()
{   
    return 0.0;
}

float Triangle::getPerimeter()
{   
    return (m_a + m_b + m_c);
}