#include <iostream>

int main() {
    int numero = 5;

    if (numero > 3 && numero < 10) {
        std::cout << "5 é maior que 3 e menor que 10." << std::endl;
    } else {
        std::cout << "5 não é maior que 3 e/ou não é menor que 10." << std::endl;
    }

    return 0;
}
