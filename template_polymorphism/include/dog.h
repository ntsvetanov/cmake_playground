#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog 
{
	private:
		int m_age;
		float m_weight;
	
	public:
		Dog(float m_weight, int m_age);
		int  getAge();
		float getWeight();
		void makeSound();
};



#endif
