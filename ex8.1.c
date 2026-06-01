/* 

Escreva uma função em C que receba como argumento um número inteiro qualquer e retorne 1
caso esse número seja um número primo e 0 caso contrário.

*/
int verificaPrimo(int n)
{

    if (n == 1)
    {
        return 0; // nao e primo
    }

    for (int i = 2; i < n -1; i++)
    {
        if (n % i == 0)
        {
            return 0; // nao e primo
        }
    }

    return 1; // e primo
    
}