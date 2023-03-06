#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char nome[256];
    char sobrenome[256];
    int ano_nascimento;
    int ano_atual = 2023;
    int idade;

    printf ("Qual seu nome?\n");
    scanf ("%s", nome);

    printf ("\nQual é o seu sobrenome?\n");
    scanf ("%s", sobrenome);
    
    printf ("\nMaravilha, %s %s.\n", nome, sobrenome);

    printf ("\nE Qual a seu ano de nascimento?\n", ano_nascimento);
    scanf ("%d", &ano_nascimento);

    idade = (ano_atual - ano_nascimento);

    printf ("\nMuito obrigado %s %s, você tem %d anos", nome, sobrenome, idade);
    printf ("\n \n \n");

    return 0;

}

