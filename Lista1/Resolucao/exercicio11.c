/*
 * 
 *  11. Faça um programa que leia 1 número e o eleve a potência de 2.
 */ 
#include <stdio.h>

int main()
{
    int numero;
    int resultado;
    
    printf("Informe um numero: ");
    scanf("%d", &numero);

    resultado = numero * numero;

    printf("O numero informado elevado a 2 e: %d", resultado);

    return 0;
}
