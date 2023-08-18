#include <iostream>

class Base
{
public:
	virtual void someMethod()
	{
		std::cout << "This is Base's version of someMethod()." << std::endl;
	}

protected:
	int m_protectedInt{ 0 };

private:
	int m_privateInt{ 0 };
};

class Derived : public Base
{
public:
	void someMethod() override // Overrides Base's someMethod()
	{
		std::cout << "This is Derived's version of someMethod()." << std::endl;
	}

	virtual void someOtherMethod()
	{
		std::cout << "I can access base class data member m_protectedInt." << std::endl;
		std::cout << "Its value is " << m_protectedInt << std::endl;
	}
};


int main()
{
	{
		Base myBase;
		myBase.someMethod();  // Calls Base's version of someMethod().
	}

	{
		Derived myDerived;
		myDerived.someMethod();   // Calls Derived's version of someMethod()
	}

	{
		Derived myDerived;
		Base& ref{ myDerived };
		ref.someMethod();   // Calls Derived's version of someMethod()
	}

	{
		Derived myDerived;
		Base& ref{ myDerived };
		myDerived.someOtherMethod();  // This is fine.
	}

	{
		Derived myDerived;
		Base assignedObject{ myDerived };  // Assigns a Derived to a Base.
		assignedObject.someMethod();       // Calls Base's version of someMethod()
	}
	return 0;
}