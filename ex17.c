/*

Escreva uma função em C que calcule e retorne o valor de H , sendo H calculado pela série
abaixo. O número de termos N deve ser passado como parâmetro para a função.
H = 1 + 1/2 + 1/3 + 1/4 + ... 1/n

*/
#include <stdio.h>

float valorH(int n)
{
    float h = 0;

    for (float i = 0; i < n; i++)
    {
        h += 1/(i+1);
    }

    return h;
}
