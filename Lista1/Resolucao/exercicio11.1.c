/*
 * 
 *  11.1 Reescreva o exercício anterior utilizando a função pow(x, y).
 */ 
#include <stdio.h>
#include <math.h>

int main()
{
    int numero;
    int resultado;
    
    printf("Informe um numero: ");
    scanf("%d", &numero);

    resultado = pow(numero, 2);

    printf("O numero informado elevado a 2 e: %d", resultado);

    return 0;
}