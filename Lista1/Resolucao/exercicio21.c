/*
 * 
 * 21. Faça um programa que leia duas strings e copie a primeira na segunda e em 
 * seguida imprima na tela as duas strings. Dica: pesquise sobre a função strcpy().
 * 
 */
#include <stdio.h>
#include <string.h>


int main()
{
   char palavra1[50];
   char palavra2[50];

   printf("Informe a primeira palavra: ");
   scanf("%s", palavra1);

   printf("Informe a segunda palavra: ");
   scanf("%s", palavra2);

   strcpy(palavra2, palavra1);
    
   printf("palavra 1: %s\n", palavra1);
   printf("palavra 2 (copia da palavra 1): %s\n", palavra2);

   return 0;
}
