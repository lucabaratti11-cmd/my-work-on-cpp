#include <iostream>

int main () 
{
    int a,b,c;

    std::cout << "inserisci due numeri: " << std::endl;
    std::cin >> a >> b; // leggo i valori di a e b inseriti dall'utente

    c=a;
    a=b;
    b=c;
    
    std::cout << "le variabili con valore invertito: "<< a << " " << b <<  std::endl; // stampo le variabili con valore invertito
    std::cin >> a; // attendo che l'utente prema un tasto prima di chiudere il programma
    
    return 0; // termino il programma
}