#include <iostream>

int main() {
    std::cout << "inserisci la tua eta' " << std::endl;

    int eta;
    std::cin >> eta;

    if (eta > 18 && eta < 65) { // Se l'età è maggiore di 18 e minore di 65, stampa "sei in eta' lavorativa"
        std::cout << "sei in eta' lavorativa" << std::endl; 

    } else if (eta >= 65) { // Se l'età è maggiore o uguale a 65, stampa "sei in eta' pensionabile"
        std::cout << "sei in eta' pensionabile" << std::endl;   

    } else if (eta <= 18) { // Se l'età è minore o uguale a 18, stampa "sei in eta' scolare"
        std::cout << "sei in eta' scolare" << std::endl;}
   


    return 0;
} 