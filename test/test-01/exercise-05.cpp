#include <iostream>

int main ()
{
    float saldo = 500; // Inizializzo il saldo del conto corrente a 500
    int azione;

    std::cout << "seleziona l' azione che si vuole eseguire (premere 1 per visualizzare il saldo, premere 2 per depositare denaro,  premere 3 per prelevare denaro): " << std::endl; // Chiedo all'utente di selezionare l'azione che vuole eseguire

    std::cin >> azione;

    if (azione == 1)
    {
        std::cout << "Il saldo attuale è: " << saldo << std::endl; // Visualizzo il saldo attuale
    }
    else if (azione == 2)
    {
        float deposito;
        std::cout << "Inserisci l'importo da depositare: "; // Chiedo all'utente di inserire l'importo da depositare
        std::cin >> deposito;
        saldo += deposito; // Aggiungo l'importo al saldo
        std::cout << "Il nuovo saldo è: " << saldo << std::endl; // Visualizzo il nuovo saldo
    }
    else if (azione == 3)
    {
        float prelievo;
        std::cout << "Inserisci l'importo da prelevare: "; // Chiedo all'utente di inserire l'importo da prelevare
        std::cin >> prelievo;
        if (prelievo > saldo)
        {
            std::cout << "Saldo insufficiente" << std::endl; // Controllo se il saldo è sufficiente per il prelievo
        }
        else
        {
            saldo -= prelievo; // Sottraggo l'importo dal saldo
            std::cout << "Il nuovo saldo è: " << saldo << std::endl; // Visualizzo il nuovo saldo
        }
    }
    else
    {
        std::cout << "Azione non valida" << std::endl; // Controllo se l'azione selezionata è valida
    }

    return 0;
}
