/*

A série de Fibonacci é formada pela sequência: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Escreva uma função
em C que gere e imprima a série até o N -ésimo termo, onde N é um número inteiro positivo
passado como argumento para a função. Sua função deve retornar a soma dos N números gerados.
Observe que para gerar o termo N é usado a soma dos termos [N-1] + [N -2].'

*/

#include <stdio.h>

int fibonacci(int valorN)
{
    int a = 1;
    int b = 0;
    int c = 0;
    int soma = 0;

    for (int i = 0; i < valorN; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d, ", a);
        soma += a;
    }

    return soma;
}

int lerNumero()
{
    int leitor;
    int nmr;

    do
    {
        leitor = scanf("%d", &nmr);

        if (leitor != 1)
        {
            printf("Entrada invalida! Tente novamente: ");
            while(getchar() != '\n');
        }
    } while (leitor != 1);

    return nmr;
}

int main(void)
{
    int n = lerNumero();
    int soma = fibonacci(n);

    printf("\nSoma: %d\n", soma);

    return 0;
}