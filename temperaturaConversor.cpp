#include <iostream>
using namespace std;

int main() {
    float temperaturaCelsius, temperaturaFahrenheit;

    // Solicita ao usuário a temperatura em Celsius
    cout << "Digite a temperatura em Celsius: ";
    cin >> temperaturaCelsius;

    // Converte a temperatura de Celsius para Fahrenheit
    temperaturaFahrenheit = (temperaturaCelsius * 9/5) + 32;

    // Exibe o resultado da conversão
    cout << "A temperatura em Fahrenheit é: " << temperaturaFahrenheit << " graus Fahrenheit" << endl;

    return 0;
}
