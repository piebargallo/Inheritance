#include <string_view>

class Padre
{
protected:
	int m_valor{};

public:
	Padre(int valor) : m_valor{ valor } {}

	std::string_view getNombre() const { return "Toque"; }
	int getValor() const { return m_valor; }
};

class Derivada : public Padre
{
public:
	Derivada(int valor) : Padre{ valor } {}

	std::string_view getNombre() const { return "Roque"; }
	int getValorDoblado() const { return m_valor * 2; }
};

#include <iostream>

int main()
{
	Derivada derivada{ 4 };
	Derivada& rDerivada{ derivada };
	Derivada* pDerivada{ &derivada };

	/* Padre& rPadre{ derivada };
	   Padre* pPadre{ &derivada }; */

	std::cout << "Derivada es: " << derivada.getNombre() << " y valor: " << derivada.getValor() << std::endl;
	std::cout << "Derivada es: " << rDerivada.getNombre() << " y valor " << rDerivada.getValor() << std::endl;
	std::cout << "Derivada es: " << pDerivada->getNombre() << " y valor " << pDerivada->getValor() << std::endl;
	return 0;
}