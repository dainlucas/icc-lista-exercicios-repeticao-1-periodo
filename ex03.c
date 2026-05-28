/*

Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de
códigos, obedecendo à seguinte codificação:
    • 1, 2, 3, 4 = voto para os respectivos candidatos;
    • 5 = voto nulo;
    • 6 = voto em branco.
Elabore uma função em C que leia o código de cada voto. Calcule e escreva:
    • O total de votos para cada candidato;
    • O total de votos nulos;
    • O total de votos em branco.
Como finalizador do conjunto de votos, utilize o valor 0.

*/
#include <stdio.h>

void contadorVotos()
{
    // limite de 1000 votos proposital
    int entrada[1000];
    int votos[7];
    int leitor;
    int continuarVotos = 1;
    int usuario = 0;

    while(usuario < 1000 && continuarVotos)
    {
        printf("*%d: ", usuario+1);

        do
        {
        leitor = scanf("%d", &entrada[usuario]);

        if (leitor != 1)
        {
            printf("Entrada invalida\n");
            while(getchar() != '\n');
        }
        else if (entrada[usuario] < 0 || entrada[usuario] > 6)
        {
            printf("Acao não existente\n");
        }
        else if (entrada[usuario] == 0)
        {
            printf("Finalizador acionado, calculando votos...");
            continuarVotos = 0;
            break;
        }
        }   while (leitor != 1 || entrada[usuario] < 1 || entrada[usuario] > 6);
        
        if (continuarVotos == 0)
        {
            break;
        }

        usuario++; // proximo usuário
    }
    
    votos[0] = 0;
    votos[1] = 0;
    votos[2] = 0;
    votos[3] = 0;
    votos[4] = 0;
    votos[5] = 0;
    votos[6] = 0;

    for (int i = 0; i < usuario; i++)
    {
        switch (entrada[i])
        {
        case 1:
            votos[1] ++;
            break;
        case 2:
            votos[2] ++;
            break;
        case 3:
            votos[3] ++;
            break;
        case 4:
            votos[4] ++;
            break;
        case 5:
            votos[5] ++;
            break;
        case 6:
            votos[6] ++;
            break;
        default:
            printf("Erro inesperado!\n");
            break;
        }
    }

    printf("TOTAL DE VOTOS DE CADA CANDIDATO:\nCandidato 1: [%d]\nCandidato 2: [%d]\nCandidato 3: [%d]\nCandidato 4: [%d]\nVotos Nulos: [%d]\nVotos Brancos: [%d]\n", votos[1], votos[2], votos[3], votos[4], votos[5], votos[6]);
}

int main(void)
{
    contadorVotos();
    return 0;
}