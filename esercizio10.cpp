#include <iostream>

int main () 
{
    double v,s,t;

    std::cout << "insersci le variabili spazio e tempo, da cui verra calcolata la velocita' (m/s): " << std::endl;
    std::cin >> s >> t;// leggo i valori di s e tv inseriti dall'utente

    v = s / t; // calcolo la divisione tra spazio e tempo
    
    std::cout << "la velocita' corrisponde a: " << v << std::endl;  // stampo il risultato della divisione tra spazio e tempo

    
    std::cin >> s; // attendo che l'utente prema un tasto prima di chiudere il programma
    
    return 0; // termino il programma
}