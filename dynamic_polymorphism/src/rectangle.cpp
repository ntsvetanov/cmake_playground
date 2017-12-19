#include <iostream>
#include <stdexcept>

#include "rectangle.h"


Rectangle::Rectangle(float a, float b) 
{   

	if(a < 0 || b < 0)
		throw std::invalid_argument( "received negative value" );
	
	m_a = a;
	m_b = b;
}


float Rectangle::getArea()
{   
    return m_a * m_b;
}

float Rectangle::getPerimeter()
{   
    return (m_a + m_b) * 2;
}