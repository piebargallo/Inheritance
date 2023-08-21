#include <iostream>

class Animal
{
public:
	virtual void eat() = 0;
	virtual void sleep() { std::cout << "zzzzz...." << std::endl; }
};

class Dog : public virtual Animal
{
public:
	virtual void bark() { std::cout << "Woof!" << std::endl; }
	void eat() override { std::cout << "The dog ate." << std::endl; }
};

class Bird : public virtual Animal
{
public:
	virtual void chirp() { std::cout << "Chirp!" << std::endl; }
	void eat() override { std::cout << "The bird ate." << std::endl; }
};

class DogBird : public Dog, public Bird
{
public:
	void eat() override { Dog::eat(); }
};

int main()
{
	DogBird myConfusedAnimal;
	myConfusedAnimal.sleep();  // Not ambiguous because of virtual base class
}
