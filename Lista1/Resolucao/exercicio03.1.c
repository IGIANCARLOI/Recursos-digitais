/*
* 3.1. Faça um programa que leia o NOME COMPLETO do usuário e, logo em seguida, escreva a mensagem “Olá” seguida do nome do usuário. 
* Dica: pesquise pela formatação da entrada usando scanf.
*/

#include <stdio.h>

int main()
{
    char nome[50];

    printf("Nome?: ");
    scanf("%[^\n]s", nome);  //tudo aquilo que não for quebra de linha (enter) sera armazenado na variavel nome

    printf("Ola: %s\n", nome);

    return 0;
} 
