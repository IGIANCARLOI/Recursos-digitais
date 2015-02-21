/*
 * 
 * 25. Faça um programa que leia 2 números e eleve o primeiro a potência do segundo. Exemplo: numero1 = 2, numero2 = 6, então resultado = 64. 
 * Dica: utilize/pesquise sobre a função pow(), que se encontra na biblioteca math.h.
 * 
 * 
 */
#include <stdio.h>
#include <math.h>


int main()
{
    int base;
    int expoente;

    printf("Informe a base: ");
    scanf("%d", &base);

    printf("Informe o expoente: ");
    scanf("%d", &expoente);

    printf("O resultado dessa potenciacao e: %lf", pow(base, expoente));

    return 0;
}
