#include <iostream>

#include "dog.h"
#include "cat.h"

using namespace std;



int main()
{

	Dog dog(54.2, 2);
	cout << "dog`s age = " << dog.getAge() << " dog`s weight = " << dog.getWeight() <<endl;
	cout << "dog`s sound is ";
	dog.makeSound();
	cout << endl;
	
	//Cat cat(22, 7);
	//cout << "cat`s age = " << cat.getAge() << " cat`s weight = " << cat.getWeight() << endl;
	//cout << "cat`s sound is ";
	//cat.makeSound();
	//cout << endl;
	//delete poly;
	
	
	Animal<Dog> animal;
	animal.makeSound(dog);
	return 0;
}