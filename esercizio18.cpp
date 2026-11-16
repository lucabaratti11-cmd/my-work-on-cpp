#include <iostream>

int main() {
    std::cout << "inserisci inserisci il costo della spesa " << std::endl;

    int spesa;
    std::cin >> spesa;

    if (spesa > 100) { // Se la spesa è maggiore di 100, stampa "hai diritto ad uno sconto del 10%"
        std::cout << "hai diritto ad uno sconto del 10%" << std::endl;
        std::cout << "il totale della spesa e' " << spesa - (spesa * 0.1) << std::endl; // Calcola il totale della spesa scontata del 10% 

    } else if (spesa <= 100) { // Se la spesa è minore o uguale a 100, stampa "non hai diritto ad uno sconto"
        std::cout << "non hai diritto ad uno sconto" << std::endl;
        std::cout << "il totale della spesa e' " << spesa << std::endl; // Stampa il totale della spesa senza sconto   
    }

    
   


    return 0;
} 