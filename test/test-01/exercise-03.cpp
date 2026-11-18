#include <iostream>

int main ()
{
    int numero;
    std::cout << "Inserisci un numero: "; // Chiedo all'utente di inserire un numero
    std::cin >> numero;

    if (numero % 2 == 0)
    {
        std::cout << "Il numero è pari" << std::endl; // Controllo se il numero è pari
    }
    else
    {
        std::cout << "Il numero è dispari" << std::endl; // Controllo se il numero è dispari
    }










    return 0;
}