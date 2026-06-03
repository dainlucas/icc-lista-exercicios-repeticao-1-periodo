/*

Escreva uma função em C que receba como parâmetro um número inteiro positivo do usuário e,
utilizando um laço de repetição e operações aritméticas (resto da divisão % e divisão inteira /),
exiba o número com os seus dígitos invertidos. Exemplo: Se o usuário digitar 1234, o programa
deve exibir 4321.

*/

#include <stdio.h>

void inverteNumero(int entrada)
{
    int digito;
    
    while(entrada != 0)
    {
        digito = entrada % 10;
        printf("%d", digito);
        entrada /= 10;
    }
    printf("\n");
}