/*
 * 
 * 15. Faça um programa que leia o comprimento, a altura e a espessura de um sólido cúbico, calcule e imprima o volume do mesmo. 
 * Os valores de entrada podem não ser inteiros.
 * 
 * 
 */
#include <stdio.h>

int main()
{
    float comprimento = 0.0f;
    float altura = 0.0f;
    float espessura = 0.0f;
    float volume = 0.0f;

    printf("Informe o comprimento do solido cubico: ");
    scanf("%f", &comprimento);

    printf("Informe a altura do solido cubico: ");
    scanf("%f", &altura);

    printf("Informe a espessura do solido cubico: ");
    scanf("%f", &espessura);

    volume = comprimento * altura * espessura;

    printf("O volume do solido cubico e: %f", volume);

    return 0;   
}
