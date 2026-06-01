/*

Faça um programa em C que leia e valide as seguintes informações de um usuário utilizando laços
de repetição:
• Idade: deve ser entre 0 e 150 anos;
• Salário: deve ser maior que zero;
• Sexo: deve ser 'M' ou 'F'.
O programa deve continuar pedindo o dado específico até que o usuário digite um valor
válido para cada um deles.

*/

#include <stdio.h>

// declaracoes das funcoes no header
int lerNumero();
int lerIdade();
double lerDouble();
double lerSalario();
char lerChar();
char lerSexo();

int main(void)
{
    int idade;
    double salario;
    char sexo;

    printf("Digite a idade: ");
    idade = lerIdade();
    printf("\nDigite o salario: ");
    salario = lerSalario();
    printf("\nDigite o sexo: ");
    sexo = lerSexo();

    printf("\nIdade: %d\nSalario: %.2f\nSexo: %c\n", idade, salario, sexo);

    return 0;
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
int lerIdade()
{
    int i, invalido;

    do
    {
        i = lerNumero();
        invalido = (i < 0 || i > 150);
        if (invalido)
            printf("Idade invalida! Tente novamente: ");
    } while (invalido);
    
    return i;
}
char lerChar()
{
    int leitor;
    char c;

    do
    {
        leitor = scanf(" %c", &c);

        if (leitor != 1)
        {
            printf("Entrada invalida! Tente novamente: ");
            while(getchar() != '\n');
        }

    } while (leitor != 1);
    
    return c;
}
double lerSalario()
{
    double s;
    int invalido;

    do
    {
        s = lerDouble();
        invalido = (s <= 0);
        if (invalido)
            printf("Salario Invalido! Tente novamente: ");
    } while (invalido);
    
    return s;
}
char lerSexo()
{
    char sx;
    int invalido;

    do
    {
        sx = lerChar();
        invalido = (sx != 'M' && sx != 'm' && sx != 'F' && sx != 'f');
        if (invalido)
            printf("Sexo Invalido! Tente novamente: ");
    } while (invalido);
    
    return sx;
}