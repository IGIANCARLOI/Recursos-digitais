/*
 * 
 * 9. Faça um programa que leia 2 valores inteiros calcule a divisão inteira e em seguida escreva o resultado na tela.
 */

#include <stdio.h>

int main()
{
    int numero1 = 0;
    int numero2 = 0;    
	int divisaoInteira;

    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);
	
	divisaoInteira = numero1 / numero2;

    printf("A divisao inteira dos dois numeros e: %d", divisaoInteira);

    return 0;
}

