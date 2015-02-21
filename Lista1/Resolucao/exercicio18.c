/*
 * 
 * 18. Faça um programa que leia uma palavra (sem espaços) e escreva o tamanho dela.
 * Dica: para isso utilize a função strlen (string).
 * 
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[50];
    
    printf("Informe uma palavra sem espacos: ");
    scanf("%s", palavra);

    printf("O tamanho da palavra e: %lu", strlen(palavra));

    return 0;
}
