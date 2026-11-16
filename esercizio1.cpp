#include <iostream>

int main () 
{
    double a,b;

    std::cout << "inserisci due numeri interi positivi: " << std::endl;
    std::cin >> a >> b; // leggo i valori di a e b inseriti dall'utente

    std::cout << "la somma dei due numeri e': " << a + b << std::endl; // stampo la somma dei due numeri
    
    std::cin >> a; // attendo che l'utente prema un tasto prima di chiudere il programma
    
    return 0; // termino il programma
}