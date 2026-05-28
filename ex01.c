/* 

A prefeitura de Ozimandias fez uma pesquisa entre seus habitantes, coletando dados sobre o salário
e o número de filhos. A prefeitura deseja saber:
• a) A média do salário da população;
• b) A média do número de filhos;
• c) O maior salário;
• d) O percentual de pessoas com salário até R 100,00.
Escreva um programa em C que leia os dados de várias pessoas e compute os valores solicitados. O
programa deve ser finalizado quando for inserido um salário negativo.

*/

#include <stdio.h>

int main(void)
{
    // limite de 1000 pessoas intencional
    int qtdFilhos[1000];
    double salario[1000];

    int continuarCadastro = 1;
    int qtdPessoas = 0;
    int leitor = 0;

    while(qtdPessoas < 1000 && continuarCadastro)
    {
        printf("\n*Pessoa número %d\n", qtdPessoas+1);
        
        printf("Salario: R$ ");
        do
        {
            leitor = scanf("%lf", &salario[qtdPessoas]);
            if (leitor != 1)
            {
                printf("Entrada inválida, tente novamente: ");
                while(getchar() != '\n');
            }
            else if (salario[qtdPessoas] < 0)
            {
                printf("Salario menor do que zero, encerrando cadastro...\n");
                continuarCadastro = 0;
            }

        } while (leitor != 1);

        if (continuarCadastro == 0)
        {
            break;
        }

        printf("Quantidade de Filhos: ");
        do
        {
            leitor = scanf("%d", &qtdFilhos[qtdPessoas]);
            if (leitor != 1)
            {
                printf("Entrada inválida, tente novamente: ");
                while(getchar() != '\n');
            }
            else if (qtdFilhos[qtdPessoas] < 0)
            {
                printf("Quantidade invalida de filhos, tente novamente: ");
            }
        } while (leitor != 1 || qtdFilhos[qtdPessoas] < 0);
        
        qtdPessoas++; // proxima pessoa
    }

    if (qtdPessoas == 0)
    {
        printf("Nenhuma pessoa cadastrada!\n");
        return 0;
    }

    // calculos de media e soma
    double somaSalarios = 0;
    double mediaSalarios = 0;
    float mediaFilhos = 0;
    int somaFilhos = 0;

    for (int i = 0; i < qtdPessoas; i++)
    {
        somaSalarios += salario[i];
        somaFilhos += qtdFilhos[i];
    }

    mediaSalarios = somaSalarios / qtdPessoas;
    mediaFilhos = (double)somaFilhos / qtdPessoas;
    
    // calculo de maiorSalario
    double maiorSalario = salario[0];
    int indiceMaiorSalario = 0;

    for (int i = 0; i < qtdPessoas; i++)
    {
        if (salario[i] > maiorSalario)
        {
            maiorSalario = salario[i];
            indiceMaiorSalario = i;
        }
    }

    // calculo de percentual de pessoas com salario até R$ 100,00
    int contadorSalarioM100 = 0;
    float pctPessoasM100 = 0;

    for (int i = 0; i < qtdPessoas; i++)
    {
        if (salario[i] <= 100)
        {
            contadorSalarioM100 ++;
        }
    }
    pctPessoasM100 = ((double)contadorSalarioM100 / qtdPessoas)*100;

    // saida dos resultados
    printf("\na) A media do salario da populacao: [ R$%.2f ]\n", mediaSalarios);
    printf("b) A media do numero de filhos: [ %.2f ]\n", mediaFilhos);
    printf("c) O maior salario: [ R$ %.2f ] de indice na lista [%d]\n", maiorSalario, indiceMaiorSalario+1);
    printf("d) O percentual de pessoas com salario ate R$100,00: [ %.2f%% ]\n", pctPessoasM100);

    return 0;
}