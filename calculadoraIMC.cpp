#include <iostream>
using namespace std;

int main() {
    float peso, altura, imc;

    cout << "Digite o seu peso (em quilogramas): ";
    cin >> peso;

    cout << "Digite a sua altura (em metros): ";
    cin >> altura;

    imc = peso / (altura * altura);

    cout << "Seu Índice de Massa Corporal (IMC) é: " << imc << endl;

    return 0;
}
