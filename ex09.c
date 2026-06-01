/*

Escreva um programa em C que determine o fatorial de um número inteiro
positivo passado como parâmetros para a função.
Exemplo: 5! = 5 x 4 x 3 x 2 x 1 = 120.

*/

#include <stdio.h>

int lerInteiroPositivo();
int calculaFatorial(int f);

int main(void)
{
    int entrada, saida;

    entrada = lerInteiroPositivo();
    saida = calculaFatorial(entrada);

    printf("\nFATORIAL: %d", saida);

    return 0;
}

int lerInteiroPositivo()
{
    int leitor;
    int n, invalido;

    do
    {
        leitor = scanf("%d", &n);
        invalido = (n <= 0);

        if (leitor != 1)
        {
            printf("Entrada invalida! Tente novamente: ");
            while(getchar() != '\n');
        }
        else if(invalido)
            printf("Numero Invalido! Tente novamente: ");
    } while (leitor != 1 || invalido);

    return n;
}

int calculaFatorial(int f)
{
    //n! = n (n -1) * (n -2) * (n -3) * 1s
    int s = f;
    int j = 1;

    for (int i = 0; i < f-1; i++)
    {
        s *= (f-j);

        printf("\nIteracao %d, valor de s = %d", i, s);
        j++;
    }

    return s;
}
