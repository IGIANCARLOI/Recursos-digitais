/*
 * 
 * 22.1. Faça um programa que leia uma string e gere uma copia invertida da 
 * string e posteriormente imprimir as duas strings na tela.
 * 
 * 
 */
#include <stdio.h>
#include <string.h>

int main()
{
   char palavra[50];
   char palavraInvertida[50];

   printf("Informe a string: ");
   scanf("%s", palavra);
   
   strcpy(palavraInvertida, strrev(palavra));

   printf("A string Inserida e: %s", palavra);
   printf("A string invertida e: %s", palavraInvertida);

   return 0;
}