#include <iostream>
class Padre
{
private:
    int m_id{};

public:
    Padre(int id = 0)
        : m_id(id)
    {

    }


    int getId() const { return m_id; }
};

class Derivada : public Padre
{
private:
    double m_salario{};

public:

    Derivada(double salario = 0.0, int id = 0)
        : Padre{ id } // Llama al constructor Padre(int) con el valor de id
        , m_salario{ salario }
    {
    }

    double getSalario() const { return m_salario; }
};


int main()
{
    Derivada derivada{ 1.3, 5 }; // usa constructor Derivada(double, int)
    std::cout << "Id: " << derivada.getId() << '\n';
    std::cout << "Salario: " << derivada.getSalario() << '\n';

    return 0;
}