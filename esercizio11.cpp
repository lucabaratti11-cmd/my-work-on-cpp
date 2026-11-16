#include <iostream>
int main() {

    std::cout << "inserisici un numero intero: " << std::endl;
    
    int n;
    std::cin >> n; // leggo il valore di n inserito dall'utente

    if (n == 0) { // controllo se il numero inserito e' zero
        std::cout << "il numero inserito e' neutro" << std::endl; // stampo il risultato del controllo
    } 
    else {

    if (n > 0) { // controllo se il numero inserito e' positivo o negativo
        std::cout << "il numero inserito e' positivo" << std::endl; // stampo il risultato del controllo
    } else {
        std::cout << "il numero inserito e' negativo" << std::endl; // stampo il risultato del controllo
    }
}

    return 0;
}