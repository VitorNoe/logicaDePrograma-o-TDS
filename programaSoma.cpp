#include <iostream>

int main() {
    // Variáveis para armazenar os números fornecidos pelo usuário
    double num1, num2;

    // Insira o primeiro número
    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    // Insira o segundo número
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    // Calcula a soma dos números
    double soma = num1 + num2;

    // Imprime a soma dos números
    std::cout << "A soma dos números " << num1 << " e " << num2 << " é: " << soma << std::endl;

    return 0;
}