#include <iostream>
int main() {
    if (7 == 10 || 6 < 8) {
        std::cout << "7 é igual a 10 OU 6 é menor que 8." << std::endl;
    } else {
        std::cout << "Nenhuma das condições é verdadeira." << std::endl;
    }

    return 0;
}