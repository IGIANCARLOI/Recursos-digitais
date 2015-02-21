/*
 * 
 * 23. Faça um programa que leia uma string e um caractere e escreva a primeira posição que esse caractere se encontra na string. 
 * Dica: utilize a função strchr().
 * 
 */
#include <stdio.h>
#include <string.h>


int main()
{
   char palavra[50];
   char caractere;

   printf("Informe uma string: ");
   scanf("%s", palavra);
   __fpurge(stdin);   

   printf("Informe um char: ");
   scanf("%c", &caractere);

   printf("O caracter informado esta presente na string? %s\n", strchr(palavra, caractere));
   
   return 0;
}
