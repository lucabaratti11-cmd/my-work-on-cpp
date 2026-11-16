#include <iostream>

int main () 
{
    int a,b,c;



    a=5;
    b=10;
    c=a;

    std::cout << "le variabili : "<< a << " " << b << " " << c << std::endl; // stampo le variabili con valore invertito

    std::cin >> a; // attendo che l'utente prema un tasto prima di chiudere il programma
    
    return 0; // termino il programma
}