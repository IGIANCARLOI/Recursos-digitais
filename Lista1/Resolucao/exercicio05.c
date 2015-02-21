/*
 *5. Faça um programa que leia 2 valores inteiros calcule a soma e em seguida e escreva o resultado na tela.
 * 
 */

#include <stdio.h>


int main()
{
    int numero1 = 0;
    int numero2 = 0;
	int soma;

    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);
	
	soma = numero1 + numero2;

    printf("A soma dos dois numeros e: %d", soma);

    return 0;
}
