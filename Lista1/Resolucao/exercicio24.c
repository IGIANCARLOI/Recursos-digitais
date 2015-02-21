/*
 * 
 * 
 * 24. Faça um programa que leia um número e escreva a seguinte mensagem: "A raiz quadrada de X é: Y", onde X é o número lido e Y é a raiz quadrada de X.
 * Dica: pesquise sobre a função sqrt() e como utiliza-la.
 * 
 * 
 */
#include <stdio.h>
#include <math.h>


int main()
{
    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    printf("A raiz quadrada e: %lf\n", sqrt(numero));

    return 0;
}
