/*
 * 8. Faça um programa que leia 2 valores inteiros calcule a divisão e em seguida e escreva o resultado na tela.
 * Observe que o resultado pode não ser um inteiro.
 * 
 */
#include <stdio.h>


int main()
{
    int numero1 = 0;
    int numero2 = 0;
    float resultado = 0.0f;    

    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);
    
    resultado = (float) numero1 / numero2;

    printf("A divisão dos dois numeros e: %f", resultado);

    return 0;
}

