#include <iostream>

int main() {
    std::cout << "inserisci due numeri decimali " << std::endl;

    double n1, n2;
    std::cin >> n1;
    std::cin >> n2;

    if (n1 > n2) {
        std::cout << "il numero maggiore e': " << n1 << std::endl;
    } else if (n2 > n1) {
        std::cout << "il numero maggiore e': " << n2 << std::endl;
    } else if (n1 == n2) {
        std::cout << "i due numeri sono uguali" << std::endl;}
    
    return 0;
}