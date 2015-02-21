/*
 * 
 * 9.1 Faça um programa que leia 2 valores inteiros e escreva o resultado da divisão inteira dos mesmos.
 */

#include <stdio.h>


int main()
{
    int numero1 = 0;
    int numero2 = 0;    

    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);

    printf("A divisao inteira dos dois numeros e: %d", numero1 / numero2);

    return 0;
}