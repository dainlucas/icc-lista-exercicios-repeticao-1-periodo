/*

Construa um programa em C que leia uma quantidade N de números inteiros (onde N é fornecido
pelo usuário no início). Ao final, o programa deve exibir:

• A soma de todos os números pares digitados;
• A média de todos os números ímpares digitados.

*/

#include <stdio.h>

int lerInteiroPositivo();
int lerNumero();

int main(void)
{
    printf("Insira a quantidade de numeros que deseja adicionar: ");
    int n = lerInteiroPositivo();
    int entrada, mediaImpares;
    int somaPares = 0;
    int somaImpares = 0;
    int qtImpares = 0;

    for (int i = 0; i < n; i++)
    {
        entrada = lerNumero();
        if (entrada % 2 == 0)
            somaPares += entrada;
        else
        {
            qtImpares ++;
            somaImpares += entrada;
        }
    }

    if (qtImpares == 0)
        mediaImpares = 0;
    else
        mediaImpares = somaImpares/qtImpares;

    printf("\nSoma Pares: %d\nMedia Impares: %d\n", somaPares, mediaImpares);

    return 0;
}

int lerInteiroPositivo()
{
    int leitor;
    int num, invalido;

    do
    {
        leitor = scanf("%d", &num);
        invalido = (num <= 0);

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
int lerNumero()
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