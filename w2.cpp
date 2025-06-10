#include <iostream>
#include <algorithm> // Para usar la función std::swap

int main() {
    int num1, num2, menor, mayor;

    std::cout << "Ingrese el primer número entero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número entero: ";
    std::cin >> num2;

    if (num1 < num2) {
        menor = num1;
        mayor = num2;
    } else {
        menor = num2;
        mayor = num1;
    }

    std::cout << "El número mayor es: " << mayor << std::endl;
    std::cout << "Números enteros entre " << menor << " y " << mayor << ":" << std::endl;

    int i = menor + 1; // Empezamos con el número siguiente al menor
    while (i < mayor) {
        std::cout << i << " ";
        i++;
    }
    std::cout << std::endl;

    return 0;
}
