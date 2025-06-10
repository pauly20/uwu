#include <iostream>

int main() {
    int numero = 1;

    std::cout << "Números del 1 al 100 de 5 en 5:" << std::endl;
    while (numero <= 100) {
        std::cout << numero << " ";
        numero += 5; // Incrementa el número en 5
    }
    std::cout << std::endl;

    return 0;
}
