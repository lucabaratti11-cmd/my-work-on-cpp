#include <iostream>
#include <cmath>

int main () 
{   
    float a; 
    const double PI = 3.14159265359;

    std::cout << "inserisci inserisci il raggio di un cerchio per calcolarne l'area: " << std::endl;
    std::cin >> a ; // leggo il valori di a inserito dall'utente

    std::cout << "l'area del cerchio e': " << pow(a, 2) * PI << std::endl; // stampo l'area del cerchio calcolata con la formula A = π * r^2
    
    std::cin >> a; // attendo che l'utente prema un tasto prima di chiudere il programma
    
    return 0; // termino il programma
}