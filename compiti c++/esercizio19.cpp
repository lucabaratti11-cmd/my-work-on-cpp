#include <iostream>


int main() {

    int num1, num2, num3;// Variabili per memorizzare i tre numeri inseriti dall'utente

    std::cout << "Inserisci il primo numero: "; // Prompt per l'utente
    std::cin >> num1;  // Lettura del primo numero inserito dall'utente
    std::cout << "Inserisci il secondo numero: ";// Prompt per l'utente
    std::cin >> num2;// Lettura del secondo numero inserito dall'utente
    std::cout << "Inserisci il terzo numero: ";// Prompt per l'utente
    std::cin >> num3;

    if (num1 > num2 && num1 > num3) {
        std::cout << "Il numero maggiore è: " << num1 << std::endl; // Stampa il numero maggiore
    } else if (num2 > num1 && num2 > num3) {
        std::cout << "Il numero maggiore è: " << num2 << std::endl; // Stampa il numero maggiore
    } else if (num3 > num1 && num3 > num2) {
        std::cout << "Il numero maggiore è: " << num3 << std::endl;// Stampa il numero maggiore
    } else {
        std::cout << "Ci sono numeri uguali." << std::endl; // Messaggio nel caso in cui ci siano numeri uguali
    }
    

    return 0;
}