/*

Faça uma função em C que receba como argumento um número inteiro positivo qualquer e calcule
e retorne a soma de todos os seus algarismos individuais. Exemplo: Se o número for 528, a função
deve calcular 5 + 2 + 8 e retornar o valor 15. Utilize uma estrutura de repetição para isolar e somar
cada dígito.

*/

#include <stdio.h>

int somaAlgarismo(int n)
{
    int aux = 0;
    
    while(n != 0)
    {
        aux += n % 10;
        printf("Console log - Aux = %d\n", aux);
        n /= 10;
    }

    return aux;
}