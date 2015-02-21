/*
 * 7. Faça um programa que leia 2 valores inteiros calcule a multiplicação e em seguida e escreva o resultado na tela.
 * 
 */
#include <stdio.h>

int main()
{
    int numero1 = 0;
    int numero2 = 0;
	int multiplicacao;

    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);
	
	multiplicacao = numero1 * numero2;

    printf("A multiplicacao dos dois numeros e: %d", multiplicacao);

    return 0;
}
