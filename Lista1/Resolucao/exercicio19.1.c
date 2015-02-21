/*
 * 19.1. Faça um programa que leia dois caracteres e escreva a seguinte mensagem: “Você digitou: ‘char1’ e ‘char2’”. 
 * Dica: para resolver essa questão utilize o recurso de formatação de entrda do scanf.
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char c1; 
    char c2;

    printf("Informe o caractere 1 e em seguida o 2: ");
    scanf("%c\n", &c1);

    scanf("%c", &c2);

    printf("Voce digitou: %c e %c.", c1, c2);

    return 0;
}
