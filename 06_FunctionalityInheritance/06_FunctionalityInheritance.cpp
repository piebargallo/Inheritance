#include <iostream>

class Padre
{
protected:
	int m_valor{};

public:
	Padre(int valor) : m_valor{ valor } {}

	void localizar() const { std::cout << "Padre\n"; }
};

class Derivada : public Padre
{
public:
	Derivada(int valor) : Padre{ valor } {}

	int getValor() const { return m_valor; }
};

int main()
{
	Derivada derivada{ 4 };
	std::cout << derivada.getValor() << std::endl;
	derivada.localizar();
	return 0;
}