/*
 * 
 * 13. Faça um programa que leia o comprimento e a altura de um sólido retangular e calcule sua área. 
 * Obs.: Os valores de entrada podem não ser inteiros.
 * 
 */

#include <stdio.h>

int main()
{
    float comprimento = 0.0f;
    float altura = 0.0f;
    float area = 0.0f;

    printf("Informe o comprimento do solido retangular: ");
    scanf("%f", &comprimento);

    printf("Informe a altura do solido retangualar: ");
    scanf("%f", &altura);

    area = comprimento * altura;

    printf("A area do solido retangular e: %f", area);

    return 0;   
}
