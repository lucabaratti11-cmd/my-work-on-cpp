#include <iostream>

int main() {
    std::cout << "inserisci la tua eta' " << std::endl;

    int eta;
    std::cin >> eta;

    if (eta < 13) { // Se l'età è minore di 13, stampa "Bambino"
        std::cout << "sei un Bambino" << std::endl; 
    } else if (eta >= 13 && eta <= 17) { // Se l'età è compresa tra 13 e 17, stampa "Adolescente"
        std::cout << "sei un Adolescente" << std::endl;
    } else if (eta >= 18) { // Se l'età è maggiore o uguale a 18, stampa "Adulto"
        std::cout << "sei un Adulto" << std::endl;
    }

    return 0;
}