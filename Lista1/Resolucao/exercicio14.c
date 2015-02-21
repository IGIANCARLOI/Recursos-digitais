/*
 * 14. Faça um programa que leia o comprimento e a altura de sólido retangular e calcule seu perímetro.
 * Os valores de entrada podem não ser inteiros.
 *
 */ 
#include <stdio.h>

int main()
{
    float comprimento = 0.0f;
    float altura = 0.0f;
    float perimetro = 0.0f;

    printf("Informe o comprimento do solido cubico: ");
    scanf("%f", &comprimento);

    printf("Informe a altura do solido cubico: ");
    scanf("%f", &altura);

    perimetro = comprimento + altura;

    printf("O volume do solido cubico é: %f", perimetro);

    return 0;   
}
