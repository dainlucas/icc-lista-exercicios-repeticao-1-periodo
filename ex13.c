/*

Faça um programa em C que leia 5 números inteiros positivos entre 1 e 20. Para cada número lido,
o programa deve imprimir uma linha com aquela quantidade de caracteres asterisco *. Exemplo: Se
o número for 4, deve imprimir ****. Utilize laços aninhados.

*/

#include <stdio.h>

int lerInteiroPositivo();

int main(void)
{
    int qtLinhas = 5;
    int linhas[qtLinhas+1];

    for (int q = 0; q < qtLinhas; q++)
    {
        printf("Digite o valor da linha %d\n", q+1);
        linhas[q] = lerInteiroPositivo();
    }

    for (int i = 0; i < qtLinhas; i++)
    {
        for (int j = 0; j < linhas[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

int lerInteiroPositivo()
{
    int leitor;
    int num, invalido;

    do
    {
        leitor = scanf("%d", &num);
        invalido = (num <= 0 || num > 20);

        if (leitor != 1)
        {
            printf("Entrada invalida! Tente novamente: ");
            while(getchar() != '\n');
        }
        else if(invalido)
            printf("Numero Invalido! Tente novamente: ");
    } while (leitor != 1 || invalido);

    return num;
}