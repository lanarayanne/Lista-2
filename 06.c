/*Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles; 
assim como a diferença a existente entre ambos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int num1, num2, dif;
    printf("Digite um numero inteiro: ");
    scanf ("%d", &num1);
    printf("Digite outro numero inteiro: ");
    scanf ("%d", &num2);
    
    dif= num1-num2;
    
    if (num1 > num2) {printf ("O maior numero e %d e a diferenca entre eles e %d", num1, dif);}
    if (num2 > num1) {printf ("O maior numero e %d e a diferenca entre eles e %d", num2, dif);}
    if (num1 == num2){printf ("Os numeros sao iguais e a diferenca entre eles e %d",dif);}
    
    return 0;
}