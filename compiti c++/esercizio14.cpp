#include <iostream>

int main() {
    std::cout << "inserisci il tuo voto: " << std::endl;

    float voto;
    std::cin >> voto;

    if (voto >= 0 && voto <= 10) { // controllo se il voto è compreso tra 0 e 10

        if (voto < 6) { // se il voto è minore di 6, stampa "sei insufficente"
        std::cout << "sei insufficente" << std::endl;

    } else if (voto >= 6 && voto <= 7) { // se il voto è compreso tra 6 e 7, stampa "sei sufficente"
        std::cout << "sei sufficente" << std::endl;

    } else if (voto >= 8) { // se il voto è maggiore o uguale a 8, stampa "sei ottimo"
        std::cout << "ottimo risultato" << std::endl;
        
    }

    } else {
        std::cout << "il tuo voto non e' valido" << std::endl; // stampo il risultato del controllo
    }

    
    return 0;
}