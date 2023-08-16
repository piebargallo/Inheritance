#include <iostream>

class Padre
{
public:
	int m_id{};

	Padre(int id = 0) : m_id(id) {}

	int getId() const { return m_id; }
};

class Derivada : public Padre
{
public:
	double m_salario{};

	Derivada(double salario = 0.0) : m_salario(salario) {}

	double getSalario() const { return m_salario; }
};

int main()
{
	Padre padre{ 5 };
	Derivada derivada{ 1.3 };

	return 0;
}