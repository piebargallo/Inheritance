#include <iostream>

class Madre
{
public:
    Madre(int m)
    {
        std::cout << "Madre: " << m << '\n';
    }
};

class Hija : public Madre
{
public:
    Hija(int m, double h)
        : Madre{ m }
    {
        std::cout << "Hija: " << h << '\n';
    }
};

class Nieta : public Hija
{
public:
    Nieta(int m, double h, char n)
        : Hija{ m, h }
    {
        std::cout << "Nieta: " << n << '\n';
    }
};

int main()
{
    Nieta nieta{ 12, 7.1, 'D' };

    return 0;
}