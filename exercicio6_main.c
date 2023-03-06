#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    char sobrenome[256];
    char cidade[256];
    int ano_nascimento;
    int idade;

    printf("Olá! Qual seu nome?\n");
    scanf("%s",&nome);

    printf("\nE qual é o seu sobrenome?\n");
    scanf("%s",&sobrenome);
     
    printf("\nEm que ano você nasceu?\n");
    scanf("%d",&ano_nascimento);

    idade = 2023 - ano_nascimento;

    printf("\nQual cidade você mora?\n");
    scanf("%s",&cidade);

    printf("\n\nAguarde enquanto lemos os seus dados...\n\n");

    printf("\nNome: %s %s\nIdade: %d\nCidade: %s", nome, sobrenome, idade, cidade);

    printf("\nA primeira letra do seu nome é: %c", nome[0]);

    if (idade >= 18)
    {
        printf("\n\nVocê é maior de idade, pode fazer cagada a vontade!!!");
    } 
    else if (idade >= 12)
    {
        printf("\n\nVocê é um adolescente e ainda não pode dirigir e nem beber!!!");
    }
    else 
    {
        printf("\n\nVocê é menor de idade, vá para casa!!!");
    }
    
    printf("\n\n");

    return 0;

}