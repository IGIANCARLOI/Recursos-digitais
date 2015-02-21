/*
 * 16. Faça um programa que leia a base e a altura de um triângulo e calcule sua área. 
 * Os valores de entrada podem não ser inteiros.
 */
#include <stdio.h>

int main()
{
    float base = 0.0f;
    float altura = 0.0f;
    float area = 0.0f;

    printf("Informe a base do triangulo: ");
    scanf("%f", &base);

    printf("Informe a altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A area do triangulo e: %f", area);

    return 0;   
}
