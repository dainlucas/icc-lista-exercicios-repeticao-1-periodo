/*

Escreva um programa em C que leia do usuário o primeiro termo (a1) a razão (r) e a quantidade de
termos (n) de uma progressão geométrica. O programa deve mostrar os n termos dessa progressão.

*/

#include <stdio.h>

float lerFloat();
int lerInteiro();

int main (void)
{
    float pTermo, razao, aux;
    int qtdTermos;
    aux = 0;

    printf("Primeiro termo da PG: ");
    pTermo = lerFloat();
    printf("\nRazao da PG: ");
    razao = lerFloat();
    printf("\nQuantidade de termos da PG: ");
    qtdTermos = lerInteiro();

    printf("%.2f, ", pTermo);
    for (int i = 0; i < qtdTermos-1; i++)
    {
        if (i == 0)
        {
            aux += pTermo*razao;
            printf(" %.2f,", aux);
        }
            
        else
        {
            aux *= razao;
            printf(" %.2f,", aux);
        }
    }

    printf("\n");
    return 0;
}

float lerFloat()
{
    int leitor;
    float n;

    do
    {
        leitor = scanf("%f", &n);

        if (leitor != 1)
        {
            printf("Entrada invalida! Tente novamente: ");
            while(getchar() != '\n');
        }
    } while (leitor != 1);

    return n;
}
int lerInteiro()
{
    int leitor;
    int n;

    do
    {
        leitor = scanf("%d", &n);

        if (leitor != 1)
        {
            printf("Entrada invalida! Tente novamente: ");
            while(getchar() != '\n');
        }
    } while (leitor != 1);

    return n;
}