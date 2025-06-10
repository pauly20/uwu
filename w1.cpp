#include <iostream>

int main() {
    int contador;

    std::cout << "Ingrese el número de inicio para la cuenta regresiva: ";
    std::cin >> contador;

    std::cout << "Cuenta regresiva:" << std::endl;
    while (contador >= 0) {
        std::cout << contador << std::endl;
        contador--; // Decrementa el contador en 1
    }

    return 0;
}
