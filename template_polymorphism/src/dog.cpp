#include <iostream>
#include <stdexcept>

#include "dog.h"


Dog::Dog(float weight, int age) 
{   

	m_weight = weight;
	m_age = age;
}


int Dog::getAge()
{   
    return m_age;
}

float Dog::getWeight()
{   
    return m_weight;
}
void Dog::makeSound()
{   
    std::cout<< "whof \n"; 
}