/*

Escreva um programa em C que leia uma quantidade desconhecida de números positivos e conte
quantos deles estão nos seguintes intervalos: [0, 25], [26, 50], [51, 75] e [76, 100]. A entrada de
dados deve terminar quando for lido um número negativo.

(Observação pessoal: Venho me interessando pela maneira funcional e modular de programar, por isso a partir desse
programa, tentarei exercitar essa nova filosofia sem infringir as regras do enunciado)
*/

#include <stdio.h>

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
int sentinela(int v)
{
    return v < 0; // 0 para positivo, 1 para negativo
}
int classificarNumero(int n)
{
    if (n <= 25) return 0;
    else if (n <= 50) return 1;
    else if (n <= 75) return 2;
    else if (n <= 100) return 3;
    else 
    {
        printf("Numero fora do intervalo, tente outro: ");
        return -1;
    }
}
int main(void)
{
    int entrada;
    int numeros[4] = {0};

    while (1)
    {
        entrada = lerNumero();

        if (sentinela(entrada)) break;
        
        int intervalo = classificarNumero(entrada);

        if (intervalo == -1) continue;
        else numeros[intervalo]++;
    }

    printf("\nNumeros nos intervalos\nEntre 0-25: [%d]\nEntre 26-50: [%d]\nEntre 51-75: [%d]\nEntre 76-100: [%d]\n", numeros[0], numeros[1], numeros[2], numeros[3]);
    
    return 0;
}
