#include <iostream>
#include <string>

int main() {
    // Declaração das variáveis para armazenar o nome e a idade do usuário
    std::string nome;
    int idade;

    // insira seu nome
    std::cout << "Digite seu nome: ";
    std::getline(std::cin, nome);

    // insira sua idade
    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    // Limpa teclado
    std::cin.ignore();

    // Imprime uma mensagem de saudação
    std::cout << "Olá, " << nome << "! Você tem " << idade << " anos. Bem-vindo!\n";

    return 0;
}
