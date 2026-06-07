/* 

Uma colônia de bactérias A dobra de tamanho a cada 3 horas. Outra colônia B triplica de
tamanho a cada 4 horas. Sabendo que a colônia A começa com 1.000 bactérias e a colônia B
começa com 200 bactérias, faça um programa em C que calcule e exiba quantas horas serão
necessárias para que a população da colônia B ultrapasse a população da colônia A .

*/

#include <stdio.h>

int main(void)
{
    int tempo = 0;
    int bacA = 1000;
    int bacB = 200;

    while (bacA > bacB)
    {
        tempo++;

        if (tempo % 4 == 0)
        {
            bacB *= 3;
        }
        if (tempo % 3 == 0)
        {
            bacA *= 2;
        }
    }

    printf("Quantidade de tempo passada: %d\nQt Bac A = %d\nQt Bac B = %d\n", tempo, bacA, bacB);

    return 0;
}