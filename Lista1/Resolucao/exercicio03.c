/*
* 3.Fa�a um programa que leia o PRIMEIRO nome do usu�rio e, logo em seguida,
* escreva a mensagem "Ol�" seguida do nome do usu�rio.
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