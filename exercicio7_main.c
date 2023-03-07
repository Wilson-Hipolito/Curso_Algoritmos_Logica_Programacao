#include <stdio.h>
#include <stdlib.h>

int main()
{
    char jogador_1[256];
    char jogador_2[256];

    printf("\nPlayer 1 é a sua vez...\n");
    scanf("%s",&jogador_1);

    printf("\nPlayer 2 agora é a sua vez...\n");
    scanf("%s",&jogador_2);

    printf("\nAguarde enquanto estamos calculando o resultado...\n");

    if (strcmp(jogador_1, "papel") == 0)
        {
            if (strcmp(jogador_2, "papel") == 0)
            {
                printf("\nEmpate...");
            }
            else if (strcmp(jogador_2, "tesoura") == 0)
            {
                printf("\nO Jogador 1 perdeu, pois a tesoura corta o papel...");
            }
            else if (strcmp(jogador_2, "pedra") == 0)
            {
                printf("\nO Jogador 1 ganhou, pois o papel embrulha a pedra...");
            }
            else
            {
                printf("\nO jogador 2 jogou errado!!!");
            }
        }

    else if (strcmp(jogador_1, "tesoura") == 0)
        {
            if (strcmp(jogador_2, "tesoura") == 0)
            {
                printf("\nEmpate...");
            }
            else if (strcmp(jogador_2, "pedra") == 0)
            {
                printf("\nO Jogador 1 perdeu, pois a pedra esmaga a tesoura...");
            }
            else if (strcmp(jogador_2, "papel") == 0)
            {
                printf("\nO Jogador 1 ganhou, pois a tesoura corta o papel...");
            }
            else
            {
                printf("\nO jogador 2 jogou errado!!!");
            }
        }
    
    else if (strcmp(jogador_1, "pedra") == 0)
        {
            if (strcmp(jogador_2, "pedra") == 0)
            {
                printf("\nEmpate...");
            }
            else if (strcmp(jogador_2, "papel") == 0)
            {
                printf("\nO Jogador 1 perdeu, pois o papel embrulha a pedra...");
            }
            else if (strcmp(jogador_2, "tesoura") == 0)
            {
                printf("\nO Jogador 1 ganhou, pois a pedra esmaga a tesoura...");
            }
            else
            {
                printf("\nO jogador 2 jogou errado!!!");
            }
        }
    else
    {
        printf("\nO jogador 1 jogou errado!!!");
    }
        
    printf("\n\n");


    return 0;
}
