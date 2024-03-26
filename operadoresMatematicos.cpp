#include <iostream>
int main() {
// Definindo os números para as operações
int num1 = 15;
int num2 = 20;
int num3 = 7;
int num4 = 15;
int num5 = 5;
int num6 = 6;
int num7 = 20;
int num8 = 4;

// Realizando as operações matemáticas
int soma = num1 + num2;
int subtracao = num3 - num4;
int multiplicacao = num5 * num6;
int divisao = num7 / num8;
int resto = num7 % num8; // Resto da divisão
// Imprimindo os resultados
printf("Soma: %d + %d = %d\n", num1, num2, soma);
printf("Subtração: %d - %d = %d\n", num3, num4, subtracao);
printf("Multiplicação: %d * %d = %d\n", num5, num6, multiplicacao);
printf("Divisão: %d / %d = %d (Quociente), Resto: %d\n", num7, num8, divisao, resto);
return 0;
}