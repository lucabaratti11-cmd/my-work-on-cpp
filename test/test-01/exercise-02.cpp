#include <iostream>

int main()
{
    std::cout << "Inserisci un voto da 1 a 10: "; // Chiedo all'utente di inserire un voto da 1 a 10
    int voto;
    std::cin >> voto;

    if (std::cin.fail())
    {
        std::cout << "Input non valido" << std::endl; // Controllo se l'input non è un numero
        return 1;
    }

    if (voto < 1 || voto > 10)
    {
        std::cout << "Voto non valido" << std::endl; // Controllo se il voto è fuori dal range 1-10
    }
    else if (voto == 10)
    {
        std::cout << "Ottimo" << std::endl; // Controllo se il voto è 10
    }
    else if (voto >= 8)
    {
        std::cout << "Buono" << std::endl; // Controllo se il voto è tra 8 e 9
    }
    else if (voto >= 6)
    {
        std::cout << "Sufficiente" << std::endl; // Controllo se il voto è tra 6 e 7
    }
    else if (voto == 5)
    {
        std::cout << "Insufficiente" << std::endl; // Controllo se il voto è 5
    }
    else
    {
        std::cout << "Insufficiente grave" << std::endl; // Controllo se il voto è tra 1 e 4
    }

    return 0;
}
