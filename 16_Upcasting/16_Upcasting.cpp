#include <iostream>
#include <string>

class Padre
{
protected:
	int m_valor{};

public:
	Padre(int valor)
		: m_valor{ valor }
	{}

	virtual ~Padre() = default;
};

class Derivada : public Padre
{
protected:
	std::string m_nombre{};

public:
	Derivada(int valor, const std::string& nombre)
		: Padre{ valor }, m_nombre{ nombre }
	{}

	const std::string& getNombre() const { return m_nombre; }
};

Padre* getObjeto(bool returnDerivada)
{
	if (returnDerivada)
		return new Derivada{ 1, "Maspalomas" };
	else
		return new Padre{ 2 };
}

int main()
{
	Padre* p{ getObjeto(true) }; // Upcasting
	delete p;
	return 0;
}


