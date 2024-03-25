#include <iostream>
using namespace std;

int main() {
    float temperaturaCelsius, temperaturaFahrenheit;

    // Solicita ao usuário a temperatura em Celsius
    cout << "Digite a temperatura em Celsius: ";
    cin >> temperaturaCelsius;

    // Converte a temperatura de Celsius para Fahrenheit
    temperaturaFahrenheit = (temperaturaCelsius * 9/5) + 32;

    // Verifica se a temperatura em Fahrenheit é alta (por exemplo, maior que 100 graus Fahrenheit)
    if (temperaturaFahrenheit > 100) {
        // Imprime o resultado em vermelho
        cout << "\033[1;31m"; // Sequência de escape ANSI para cor vermelha brilhante
        cout << "A temperatura em Fahrenheit é: " << temperaturaFahrenheit << " graus Fahrenheit" << endl;
        cout << "\033[0m"; // Reset da cor para a cor padrão
    } else {
        // Imprime o resultado normalmente
        cout << "A temperatura em Fahrenheit é: " << temperaturaFahrenheit << " graus Fahrenheit" << endl;
    }

    return 0;
}