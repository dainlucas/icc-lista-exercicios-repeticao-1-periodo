/*

Escreva um programa em C que receba um número inteiro positivo do usuário e determine se ele é
ou não um número primo (número divisível apenas por 1 e por ele mesmo).

*/
#include <stdio.h>

int lerInteiroPositivo();

int main(void)
{
    int entrada;

    entrada = lerInteiroPositivo();

    if (entrada == 1)
    {
        printf("Nao e primo!\n");
        return 0;
    }

    for (int i = 2; i < entrada -1; i++)
    {
        if (entrada % i == 0)
        {
            printf("Nao e primo\n");
            return 0;
        }
    }

    printf("E primo!\n");

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
