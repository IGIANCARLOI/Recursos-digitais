/*
* 3.Faça um programa que leia o PRIMEIRO nome do usuário e, logo em seguida,
* escreva a mensagem "Olá" seguida do nome do usuário.
*/

#include <stdio.h>

int main()
{
    char nome[50];

    printf("Nome?: ");
    scanf("%s", nome);

    printf("Ola: %s\n", nome);

    return 0;
}