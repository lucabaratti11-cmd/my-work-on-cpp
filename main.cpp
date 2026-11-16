#include <iostream> // importo libreria iostream per input/output


 // utilizzo lo spazio dei nomi std per evitare di scrivere std:: prima di cout e endl
 int main() // funzione principale del programma
{ 
   
//    int x;
//    int y;
//    int z;
//    int k;

//    std::cout << "inserisci un un numero intero positivo di cui verra calcolato il fattoriale:" << std::endl; 
   
//    std::cin >> x; // leggo il valore di x inserito dall'utente


//    y = x;
//    k = x;

//    while (x > 1) {
//     y = y * (x - 1); // calcolo il fattoriale di x
//     x--; // decremento il valore di x

//    }

//    std::cout << "il fattoriale di " << k << " e': " << y << std::endl;

//    std::cin >> z; // attendo che l'utente prema un tasto prima di chiudere il programma


int n;
int somma;
int i;

std::cout << "inserisci un numero intero positivo: " << std::endl;

std::cin >> n; // leggo il valore di n inserito dall'utente

std::cout << "i numeri da " << n << " a 1 sono: " << std::endl; 

for (int i = n; i >= 1; i--) 
{ 
    std::cout << i << std::endl;
} // stampo i numeri da n a 1

std::cin >> somma; // attendo che l'utente prema un tasto prima di chiudere il programma9











   

    return 0; // ritrno il valore 0 per indicare che il programma è terminato correttamente
} 
// caratteri speciali: \n = nuova riga, \t = tabulazione, \\ = backslash, \" = virgolette doppie, \' = virgolette singole