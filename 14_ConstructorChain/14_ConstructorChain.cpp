#include <iostream>

class Something
{
public:
	Something() { std::cout << "2"; }
	virtual ~Something() { std::cout << "2"; }
};

class Base
{
public:
	Base() { std::cout << "1"; }
	virtual ~Base() { std::cout << "1"; }
};

class Derived : public Base
{
public:
	Derived() { std::cout << "3"; }
	virtual ~Derived() { std::cout << "3"; }

private:
	Something m_dataMember;
};

int main()
{
	{
		Derived myDerived;
	}

	std::cout << std::endl;

	{
		Base* ptr{ new Derived{} };
		delete ptr;
	}
	return 0;
}
