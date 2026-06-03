/*

Crie um programa em C que exiba um menu com as seguintes opções:
1. Somar dois números
2. Subtrair dois números
3. Multiplicar dois números
4. Sair
O programa deve ler a opção do usuário, executar a operação matemática escolhida
(solicitando os dois números necessários) e exibir o resultado. O menu deve continuar
aparecendo em um laço de repetição até que o usuário escolha a opção 4 (Sair).

*/

#include <stdio.h>

int menu();
double lerDouble();
int sentinela(int s);
double calculadora(int e, double x, double y);

int main(void)
{
    int escolhaMenu;
    double entradas[2];
    double saida;

    while (1)
    {
        escolhaMenu = menu();

        if (sentinela(escolhaMenu))
        {
            return 0;
        }

        printf("Digite o primeiro numero: ");
        entradas[0] = lerDouble();
        printf("Digite o segundo numero: ");
        entradas[1] = lerDouble();

        saida = calculadora(escolhaMenu, entradas[0], entradas[1]);

        printf("RESULTADO: %.2f\n\n", saida);
    }
    

    return 0;
}

int menu()
{
    int e, leitor, invalido;
    printf("Escolha uma opcao:\n1. Somar dois numeros\n2. Subtrair dois numeros\n3. Multiplicar dois numeros\n4. Sair\n> ");

    do
    {
        leitor = scanf("%d", &e);
        invalido = (e < 1 || e > 4);
        
        if (leitor != 1)
        {
            printf("Entrada invalida! Tente novamente: ");
            while(getchar() != '\n');
        }
        else if (invalido)
        {
            printf("Numero invalido! Tente novamente: ");
        }

    } while (leitor != 1 || invalido);
    
    return e;
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
int sentinela(int s)
{
    return s == 4; // 1 para positivo, 0 para negativo
}
double calculadora(int e, double x, double y){
    double res = 0;

    switch (e)
    {
    case 1:
        res = x + y;
        break;
    case 2:
        res = x - y;
        break;
    case 3:
        res = x * y;
        break;
    default:
        printf("Erro inesperado");
        break;
    }
    return res;
}