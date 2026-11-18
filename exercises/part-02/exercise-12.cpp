#include <iostream>
int main() {

    std::cout << "inserisici un numero intero: " << std::endl;
    
    int n;
    std::cin >> n; // leggo il valore di n inserito dall'utente

    if (n == 0) { // controllo se il numero inserito e' zero
        std::cout << "il numero inserito e' zero" << std::endl; // stampo il risultato del controllo
    } 
    else {
        
    if (n % 2 == 0) { // controllo se il numero inserito e' pari
        std::cout << "il numero inserito e' pari" << std::endl; // stampo il risultato del controllo
    } else {
        std::cout << "il numero inserito e' dispari" << std::endl; // stampo il risultato del controllo
    }
}

    return 0;
}