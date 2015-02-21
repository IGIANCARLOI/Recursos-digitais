/*
 * 
 * 22.Faça um programa que leia uma string, faça a sua inversão e imprima na tela
*  a string invertida. Dica: pesquise sobre a função strrev() (somente Windows).
 * 
 * 
 */
#include <stdio.h>
#include <string.h>


int main()
{
   char palavra[50];

   printf("Informe a string: ");
   scanf("%s", palavra);
   strrev(palavra)

   printf("A string invertida e: %s", palavra);

   return 0;
}
