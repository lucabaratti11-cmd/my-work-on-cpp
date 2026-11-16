#include <iostream>

int main () 
{
    float f,c;


    std::cout << "inserisci una temperatura in gradi centigradi che verra' convertita in fahrenheit: " << std::endl;
    std::cin >> c; // leggo il valori di c inserito dall'utente

    f = (c * 9/5) + 32; // calcolo la conversione da gradi centigradi a gradi fahrenheit

    std::cout << "la temperatura convertita in fahrenheit corrisponde a: " << f << std::endl; // stampo il risultato della conversione
    
    std::cin >> c; // attendo che l'utente prema un tasto prima di chiudere il programma
    
    return 0; // termino il programma
}