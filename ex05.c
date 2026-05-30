/*

Escreva uma função em C que receba como argumentos dois valores inteiros e positivos: X e Y. A
função deve calcular e retornar o valor de X^Y utilizando estruturas de repetição (sem usar a
função pow da biblioteca math.h).

Exemplo: funPot(2, 4) retorna 16.

*/
#include <stdio.h>

int exponenciacao(int x, int y)
{
    int saida = 1;
    for (int i = 0; i < y; i++) saida *= x;

    return saida;
}