/*

Escreva um programa em C que imprima uma tabela de conversão de graus Celsius para Fahrenheit.
A tabela deve iniciar em 0°C e terminar em 100°C, com incrementos de 5 em 5 graus. A fórmula de
conversão é: F = (C X 9/5) + 32.

*/

#include <stdio.h>

int main(void)
{
    int incremento = 5;
    int limite = 100;

    float celsius = 0;
    float fahrenheit = 0;

    for (celsius = 0; celsius <= limite; celsius += 5)
    {
        fahrenheit = (celsius * 9/5) + 32;
        printf("%.2fC = %.2f Fht\n", celsius, fahrenheit);
    }

    return 0;
}