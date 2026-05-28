/* 

Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3
centímetros por ano. Construa um programa em C que calcule e imprima quantos anos serão
necessários para que Zé seja maior que Chico.

*/

#include <stdio.h>

int main(void)
{
    int alturaChico = 150;
    int alturaZe = 110;
    int txCrescChico = 2;
    int txCrescZe = 3;
    int anos = 0;

    while (alturaZe <= alturaChico)
    {
        alturaZe += txCrescZe;
        alturaChico += txCrescChico;
        anos++;
    }
    printf("Anos necessários: %d\nAltura do Ze apos %d anos: %dcm\nAltura do Chico apos %d anos: %dcm\n", anos, anos, alturaZe, anos, alturaChico);

    return 0;
}