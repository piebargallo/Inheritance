#include <iostream>

class Base
{
public:
	Base() {}
	~Base() {}
};

class Derived : public Base
{
public:
	Derived()
	{
		m_string = new char[30];
		std::cout << "m_string allocated" << std::endl;
	}

	~Derived()
	{
		delete[] m_string;
		std::cout << "m_string deallocated" << std::endl;
	}
private:
	char* m_string;
};

int main()
{
	Base* ptr{ new Derived{} };   // m_string is allocated here.
	delete ptr; // ~Base is called, but not ~Derived because the destructor
	// is not virtual!
}
