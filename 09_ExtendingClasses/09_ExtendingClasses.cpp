#include <iostream>

class Base
{
public:
	void someMethod() {}

protected:
	int m_protectedInt{ 0 };

private:
	int m_privateInt{ 0 };
};

class Derived : public Base
{
public:
	void someOtherMethod()
	{
		std::cout << "I can access base class data member m_protectedInt." << std::endl;
		std::cout << "Its value is " << m_protectedInt << std::endl;
	}
};

int main()
{
	Derived myDerived;
	myDerived.someMethod();
	myDerived.someOtherMethod();
	return 0;
}
