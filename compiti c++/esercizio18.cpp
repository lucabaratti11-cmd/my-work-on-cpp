#include <iostream>
#include <string>

int main() {
    const std::string PASSWORD = "CPP26"; // Definizione della password corretta
    std::string passwordInserita;// Variabile per memorizzare la password inserita dall'utente
    int tentativi = 0;// Contatore dei tentativi

    do {
        std::cout << "Inserisci la password: " << std::endl;// Prompt per l'utente
        std::cin >> passwordInserita;// Lettura della password inserita dall'utente

        if (passwordInserita == PASSWORD) {
            std::cout << "Accesso consentito" << std::endl;// Messaggio di accesso consentito
            break;
        }

        std::cout << "Accesso negato" << std::endl;// Messaggio di accesso negato
        tentativi++;

        if (tentativi >= 3) {
            std::cout << "Accesso negato, troppi tentativi" << std::endl;// Messaggio di accesso negato dopo 3 tentativi
            break;
        }

    } while (true); // Ciclo do-while per consentire all'utente di inserire la password fino a 3 tentativi

    std::cin.get(); // Attesa dell'input dell'utente prima di chiudere il programma

    return 0;
}