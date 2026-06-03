/*

Escreva um programa em C que leia 10 números reais inseridos pelo usuário. Ao final da leitura, o
programa deve mostrar qual foi o maior número digitado e qual foi o menor número digitado.

*/

#include <stdio.h>

double lerDouble();

int main(void)
{
    int qtNumeros = 10;

    double entrada;
    double maiorN = 0;
    double menorN = 0;

    for (int q = 0; q < qtNumeros; q++)
    {
        entrada = lerDouble();
        if (q == 0)
        {
            maiorN = entrada;
            menorN = entrada;
        }
        else if (entrada > maiorN)
            maiorN = entrada;
        else if (entrada < menorN)
            menorN = entrada;
    }

    printf("Maior Numero: %.2f\nMenor Numero: %.2f\n", maiorN, menorN);

    return 0;
}
double lerDouble()
{
    int leitor;
    double n;

    do
    {
        leitor = scanf("%lf", &n);

        if (leitor != 1)
        {
            printf("Entrada invalida! Tente novamente: ");
            while(getchar() != '\n');
        }
    } while (leitor != 1);
    
    return n;
}