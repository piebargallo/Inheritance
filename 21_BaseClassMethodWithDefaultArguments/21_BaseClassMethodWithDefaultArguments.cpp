#include <iostream>

class Base
{
public:
	virtual ~Base() = default;
	virtual void go(int i = 2) {
		std::cout << "Base's go with i=" << i << std::endl;
	}
};

class Derived : public Base
{
public:
	void go(int i = 7) override {
		std::cout << "Derived's go with i=" << i << std::endl;
	}
};

int main()
{
	Base myBase;
	Derived myDerived;
	Base& myBaseReferenceToDerived{ myDerived };
	myBase.go();
	myDerived.go();
	myBaseReferenceToDerived.go();
	return 0;
}