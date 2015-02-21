/*
 * 12. Faça um programa que leia a altura dos andares de um prédio e o número de andares, e calcule a altura do prédio. 
 * Os valores de entrada podem não ser inteiros.
 */
#include <stdio.h>

int main()
{
    float alturaAndares = 0.0f;
    int numeroAndares = 0;
    float alturaPredio = 0.0f;

    printf("Informe a altura dos andares: ");
    scanf("%f", &alturaAndares);

    printf("Informe o numero de andares: ");
    scanf("%d", &numeroAndares);

    alturaPredio = alturaAndares * numeroAndares;

    printf("A altura do predio e: %f", alturaPredio);

    return 0;   
}
