/*
 * 26. Faça um programa para o cálculo de:
 * v = ri
 * p = vi
 * i = q/t
 * v = w/q
 * p = ri^2
 * v-tensão, i-corrente, r-resistencia, p-potencia, t-tempo, q-carga eletrica e w-trabalho/energia.
 */
#include <stdio.h>
#include <math.h>

int main()
{
  
    float resistencia; //resistencia
    float corrente; //corrente
    float tensao; //tensao
    float potencia; //potencia
    float carga; //carga
    int tempo;   //tempo
    float trabalho; //trabalho
    
    printf("Calculo da tensao\n");
    printf("Informe a resistencia: ");
    scanf("%f", &resistencia);
    
    printf("Informe a corrente: ");
    scanf("%f", &corrente);
    
    tensao = resistencia*corrente;  
    printf("A corrente e: %f", tensao);
    
    /*----------------------------------------*/
    printf("Calculo da potencia: ");
    printf("Informe a tensao: ");
    scanf("%f", &tensao);
    
    printf("Informe a corrente: ");
    scanf("%f", &corrente);
    
    potencia = tensao*corrente;  
    printf("A potencia e: %f", potencia);
    
    /*----------------------------------------*/
    printf("Calculo da corrente: ");
    printf("Informe a carga: ");
    scanf("%f", &carga);
    
    printf("Informe o tempo: ");
    scanf("%d", &tempo);
    
    corrente = carga / tempo;
    
    printf("A corrente e: %f", corrente);
    
    /*----------------------------------------*/
    printf("Calculo da tensao: ");
    printf("Informe o trabalho: ");
    scanf("%f", &trabalho);
    
    printf("Informe a carga: ");
    scanf("%f", &carga);
    
    tensao = trabalho / carga;
    
    printf("A tensão e: %f", tensao);
    
    /*----------------------------------------*/
    printf("Cálculo da potencia: ");
    printf("Informe a resistencia: ");
    scanf("%f", &resistencia);
    
    
    printf("Informe a corrente: ");
    scanf("%f", &corrente);
    
    potencia = resistencia * (pow(corrente, 2));
    
    printf("A potencia é: %f", potencia);
  
}