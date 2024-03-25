#include <iostream>
int main() {
// Definindo os números para as operações
int num1 = 15;
int num2 = 20;
// Realizando as operações matemáticas
int soma = num1 + num2;
int subtracao = num1 - num2;
int multiplicacao = num1 * num2;
int divisao = num1 / num2;
int resto = num1 % num2; // Resto da divisão
// Imprimindo os resultados
printf("Soma: %d + %d = %d\n", num1, num2, soma);
printf("Subtração: %d - %d = %d\n", num1, num2, subtracao);
printf("Multiplicação: %d * %d = %d\n", num1, num2, multiplicacao);
printf("Divisão: %d / %d = %d (Quociente), Resto: %d\n", num1, num2, divisao, resto);
return 0;
}