#include <iostream>

int main ()
{
    const int sconto10 = 10;
    const int sconto20 = 20;
    float prezzo;

    std::cout << "Inserisci il prezzo del prodotto: "; // Chiedo all'utente di inserire il prezzo del prodotto

    std::cin >> prezzo;

    if (prezzo > 100)
    {
        prezzo = prezzo - (prezzo * sconto20 / 100); // Applico uno sconto del 20% se il prezzo è maggiore di 100
    }
    else if (prezzo > 50)
    {
        prezzo = prezzo - (prezzo * sconto10 / 100);// Applico uno sconto del 10% se il prezzo è maggiore di 50
    }

    std::cout << "Il prezzo finale del prodotto è: " << prezzo << std::endl; // Stampo il prezzo finale del prodotto dopo l'applicazione dello sconto

    return 0;
}