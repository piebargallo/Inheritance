#include <iostream>

class Base
{
public:
	void go() { std::cout << "go() called on Base" << std::endl; }
};

class Derived : public Base
{
public:
	void go() { std::cout << "go() called on Derived" << std::endl; }
};

int main()
{
	{
		Derived myDerived;
		myDerived.go();
	}

	{
		Derived myDerived;
		Base& ref{ myDerived };
		ref.go();
	}
	return 0;
}
