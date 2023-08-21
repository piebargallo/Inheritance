#include <typeinfo>
#include <iostream>

class Animal 
{ 
public: 
	virtual ~Animal() = default; 
};
					 
class Dog : public Animal {};
					 
class Bird : public Animal {};

void speak(const Animal& animal)
{
	if (typeid(animal) == typeid(Dog)) {
		std::cout << "Woof!" << std::endl;
	} else if (typeid(animal) == typeid(Bird)) {
		std::cout << "Chirp!" << std::endl;
	}
}

int main()
{
	speak(Dog{});
	speak(Bird{});
}
