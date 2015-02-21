/*
 * 6. Faça um programa que leia 2 valores inteiros calcule a subtração e em seguida e escreva o resultado na tela.
 */
#include <stdio.h>

int main()
{
    int numero1 = 0;
    int numero2 = 0;
	int subtracao;

    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);
	
	subtracao = numero1 - numero2;

    printf("A subtracao dos dois números e: %d", subtracao);

    return 0;
}
