#include <iostream>

int main () 
{
    double a,b,c;

    std::cout << "inserisci 3 numeri di cui verra' calcolata la media: " << std::endl;
    std::cin >> a >> b >> c; // leggo i valori di a e b inseriti dall'utente

    std::cout << "la media tra i tre numeri e': " << (a + b + c)/3 << std::endl; // stampo stampo la media tra i 3 numeri
    
    std::cin >> a; // attendo che l'utente prema un tasto prima di chiudere il programma
    
    return 0; // termino il programma
}