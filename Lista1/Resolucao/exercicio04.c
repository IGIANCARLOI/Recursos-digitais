/*
 * 
 *4. Faça um programa que leia um valor inteiro, adicione 2 ao valor e escreva o resultado da soma.
 *
 */
#include <stdio.h>

int main()
{
   int numero = 0;

   printf("Informe um numero: ");
   scanf("%d", &numero);
   
   numero = numero + 2;

   printf("O numero informado somado 2 resulta em: %d ", numero);

   return 0;
}
