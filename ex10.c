/*

Escreva um programa em C que leia as notas de uma turma de alunos. O programa deve calcular e
exibir a média aritmética das notas lidas e a quantidade de alunos aprovados (nota maior ou igual a
7.0). O programa deve encerrar a leitura quando o usuário digitar a nota -1.

*/
#include <stdio.h>

float lerNota();
int sentinela(int s);

int main(void)
{
    float media, nota;
    float soma = 0;
    int aprovados = 0;
    int i = 0;

    while(1)
    {
        nota = lerNota();
        if (sentinela(nota)) break;
        else 
        {
            soma += nota;
            if (nota >= 7)
                aprovados++;
        }
        i++;
    }

    if (i == 0)
    {
        printf("\nNenhuma entrada, finalizando...\n");
        return 0;
    }
        
    media = (soma / i);

    printf("Média aritmética das notas: %.2f\nQuantidade de alunos aprovados: %d\n", media, aprovados);

    return 0;
}
float lerNota()
{
    int leitor;
    float nm;

    do
    {
        leitor = scanf("%f", &nm);

        if (leitor != 1)
        {
            printf("Nota invalida! Tente novamente: ");
            while(getchar() != '\n');
        }
    } while (leitor != 1);
    
    return nm;
}
int sentinela(int s)
{
    return s < 0; // 0 para positivo, 1 para negativo
}