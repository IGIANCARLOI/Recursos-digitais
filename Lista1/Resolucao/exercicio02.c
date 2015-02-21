/*
*2.Faça um programa que leia uma palavra digitada pelo usuário e depois a escreva na tela.
*  Dica: pesquise pela função puts(s).
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[50];

    printf("Informe a palavra: ");
    scanf("%s", palavra);

    puts(palavra);

    return 0;
}