#ifndef CAT_H
#define CAT_H


#include "animal.h"

class Cat 
{
	private:
		int m_age;
		float m_weight;
	
	public:
		Cat(float m_weight, int m_age);
		int  getAge();
		float getWeight();
		void makeSound();
};





#endif
