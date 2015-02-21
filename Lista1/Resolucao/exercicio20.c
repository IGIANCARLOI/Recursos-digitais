/*
 * 
 * 20. Faça um programa que leia duas strings e as concatene em uma terceira e exiba essa terceira. 
 * Dica: pesquise sobre strcat().
 * 
 */
#include <stdio.h>
#include <string.h>


int main()
{
   char palavra1[50];
   char palavra2[50];

   printf("Informe a primeira string: ");
   scanf("%[^\n]s", palavra1);
   
   __fpurge( stdin ); //no linux
   //fflush(stdin) //no windows

   printf("Informe a segunda string: ");
   scanf("%[^\n]s", palavra2);

   printf("As duas strings concatenadas resulta em: %s", strcat(palavra1, palavra2));


   return 0;
}
