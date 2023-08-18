#include <iostream>
#include <string_view>

class Padre
{
public:
	virtual std::string_view getNombre() const { return "Padre"; }
};

class Derivada : public Padre
{
public:
	virtual std::string_view getNombre() const { return "Derivada"; }
};

int main()
{
	Derivada derivada;
	Padre& rPadre{ derivada };
	std::cout << "rPadre es un " << rPadre.getNombre() << std::endl;
	return 0;
}