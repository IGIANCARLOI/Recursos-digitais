/*
 * 10. Faça um programa que leia 2 valores inteiros e escreva o resultado do resto da divisão (mod) entre eles.
 */
#include <stdio.h>


int main()
{
    int numero1 = 0;
    int numero2 = 0; 
	int restoDivisao;

    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);
	
	restoDivisao = numero1 % numero2;

    printf("O resto da divisao dos dois numeros e: %d", restoDivisao);

    return 0;
}

