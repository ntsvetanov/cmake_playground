#include <iostream>
#include <stdexcept>

#include "cat.h"




Cat::Cat(float weight, int age) 
{   

	m_weight = weight;
	m_age = age;
}


int Cat::getAge()
{   
    return m_age;
}

float Cat::getWeight()
{   
    return m_weight;
}

void Cat::makeSound()
{   
    std::cout<< "meaw \n"; 
}