/*
*2.Fa�a um programa que leia uma palavra digitada pelo usu�rio e depois a escreva na tela.
*  Dica: pesquise pela fun��o puts(s).
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