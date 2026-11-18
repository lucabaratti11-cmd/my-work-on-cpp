#include <iostream>
#include <string>

int main()
{
    std::string figura;
    float lato, base, altezza;

    std::cout << "Inserisci il nome di una figura geometrica: ";
    std::cin >> figura;

    if (figura == "quadrato")
    {
        std::cout << "Hai inserito un quadrato" << std::endl;
        std::cout << "Inserisci il lato: ";
        std::cin >> lato;
        std::cout << "L'area del quadrato è: " << lato * lato << std::endl;
    }
    else if (figura == "rettangolo")
    {
        std::cout << "Hai inserito un rettangolo" << std::endl;
        std::cout << "Inserisci base e altezza: ";
        std::cin >> base >> altezza;
        std::cout << "L'area del rettangolo è: " << base * altezza << std::endl;
    }
    else if (figura == "triangolo")
    {
        std::cout << "Hai inserito un triangolo" << std::endl;
        std::cout << "Inserisci base e altezza: ";
        std::cin >> base >> altezza;
        std::cout << "L'area del triangolo è: " << (base * altezza) / 2 << std::endl;
    }
    else
    {
        std::cout << "Figura geometrica non valida" << std::endl;
    }

    return 0;
}
