/*
 * 17. Faça um programa que leia os lados de um triângulo e calcule o perímetro. 
 * Os valores de entrada podem não ser inteiros.
 */
#include <stdio.h>

int main()
{
    float lado1 = 0.0f;
    float lado2 = 0.0f;
    float lado3 = 0.0f;
    float perimetro = 0.0f;

    printf("Informe o lado 1 do triangulo: ");
    scanf("%f", &lado1);

    printf("Informe o lado 2 do triangulo: ");
    scanf("%f", &lado2);

    printf("Informe o lado 3 do triangulo:");
    scanf("%f", &lado3);

    perimetro = lado1 + lado2 + lado3;

    printf("O perimetro do triangulo e: %f", perimetro);

    return 0;   
}
