#include <iostream>

class BaseStatic
{
public:
	static void beStatic() {
		std::cout << "BaseStatic being static." << std::endl;
	}
};

class DerivedStatic : public BaseStatic
{
public:
	static void beStatic() {
		std::cout << "DerivedStatic keepin' it static." << std::endl;
	}
};

int main()
{
	{
		BaseStatic::beStatic();
		DerivedStatic::beStatic();
	}

	{
		DerivedStatic myDerivedStatic;
		BaseStatic& ref{ myDerivedStatic };
		myDerivedStatic.beStatic();
		ref.beStatic();
	}
	return 0;
}
