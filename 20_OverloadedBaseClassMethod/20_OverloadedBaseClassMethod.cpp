#include <iostream>

class Base
{
public:
	virtual ~Base() = default;
	virtual void overload() { std::cout << "Base's overload()" << std::endl; }
	virtual void overload(int i) {
		std::cout << "Base's overload(int i)" << std::endl;
	}
};

class Derived : public Base
{
public:
	//using Base::overload;
	void overload() override {
		std::cout << "Derived's overload()" << std::endl;
	}
};

int main()
{
	{
		Derived myDerived;
	}

	{
		Derived myDerived;
		Base& ref{ myDerived };
		ref.overload(7);
	}
	return 0;
}